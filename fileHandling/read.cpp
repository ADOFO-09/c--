#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fileReader("example.txt");
    string line;

    if(fileReader.is_open()){
        while(getline(fileReader, line)){
            cout << line << endl;
        }
    } else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}