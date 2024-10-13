#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fileWriter("example.txt");

    if(fileWriter.is_open()){
        fileWriter << "Hello, world!" << endl;
        fileWriter << "Add more content to it" << endl;
        fileWriter.close();
        cout << "File successfully created" << endl;
    } else {
        cout << "Unable to create file" << endl;
    }

    return 0;
}