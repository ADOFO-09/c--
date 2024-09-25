#include <iostream>

using namespace std;
// Write a c++ program that accepts an integer number and determine whether the number is palindromic
// a palindromic number is a number whose reverse is equal to the number

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int originalNum = num;
    int reverseNum = 0;

    while(num > 0){
        int digits = num % 10;
        reverseNum = (reverseNum * 10) + digits;
        num /= 10; 
    }

    if(reverseNum == originalNum){
        cout << originalNum << " is a palindromic number." << endl;
    }else{
        cout << originalNum << " is not a palindromic number." << endl;
    }

    return 0;
}