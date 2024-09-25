#include <iostream>
#include <cmath>
using namespace std;

// Write c++ program that accepts an integer number and display to the screen whether the number is Armstrong
// a number is Armstrong if the sum of the cube of the digits is equal to the number

void sumOfCubes(int num){
    int originalNum = num;
    float sumOfCubes = 0;
    while(num > 0){
        int digit = num % 10;
        sumOfCubes += pow(digit, 3);
        num /= 10;
    }

    if(sumOfCubes == originalNum){
        cout << originalNum << " is an Armstrong number." << endl;
    }else{
        cout << originalNum << " is not an Armstrong number." << endl;
    }
}

int main(){
    int number;
    cout <<"Enter an integer: ";
    cin >> number;

    sumOfCubes(number);

    return 0;
}