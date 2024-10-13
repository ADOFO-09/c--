#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const int MAX_STAFF = 100;

struct Staff {
    int staffNo;
    string name;
    char staffType;
    string gender;
    string department;
    double rate;
};

double getRate(char staffType){
    switch(staffType){
        case 'S': return 120.0;
        case 'J': return 70.0;
        case 'C': return 30.0;
        default: return 0.0;
    }
}

int main() {
    Staff staffList[MAX_STAFF];
    int staffCount = 0;
    ifstream staffFile("staff_records.txt");
    ifstream hoursFile("hours_worked.txt");
    string line;

    // Read staff records from the first file
    if(staffFile.is_open()){
        while(getline(staffFile, line)){
            istringstream iss(line);

            iss >> staffList[staffCount].staffNo >> staffList[staffCount].name >> staffList[staffCount].staffType
                >> staffList[staffCount].gender >> staffList[staffCount].department;

            // rate per staff type
            staffList[staffCount].rate = getRate(staffList[staffCount].staffType);
            staffCount++;
        }
        staffFile.close();
    } else {
        cout << "Unable to open staff records file!" << endl;
        return 1;
    }    

    // Read hours worked from the second file and calculate payments
    if(hoursFile.is_open()){
        while(getline(hoursFile, line)){
            istringstream iss(line);
            int staffNo;
            double hoursWorked;

            iss >> staffNo >> hoursWorked;

            // Find matching staff number and calculate payment
            bool staffFound = false;
            for(int i = 0; i < staffCount; i++){
                if(staffList[i].staffNo == staffNo) {
                    staffFound = true;
                    double grossPay = hoursWorked * staffList[i].rate;
                    double allowance = grossPay * 0.05;
                    double tax = grossPay * 0.02;
                    double netPay = grossPay - tax + allowance;

                    // Output the payment details for staff member
                    cout << "Staff No: " << staffList[i].staffNo << ", Name: " << staffList[i].name << endl;
                    cout << "Gross Pay: " << grossPay << " GHC" << endl;
                    cout << "Allowance: " << allowance << " GHC" << endl;
                    cout << "Tax Deduction: " << tax << " GHC" << endl;
                    cout << "................................" << endl;
                    break;
                }
            }

            if(!staffFound) {
                cout << "Staff number " << staffNo << " not found in staff records!" << endl;
            }

        }
         hoursFile.close();
    } else {
        cout << "Unable to open hours worked file!" << endl;
        return 1;
    }

    return 0;
}