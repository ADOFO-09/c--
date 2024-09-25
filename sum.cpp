#include <iostream>
using namespace std;



int main(){
    int x;
    int sum=0;
    cout<<"Enter positive integer: ";
    cin>>x;
    while(x != 0){
        sum += x%10;
        x /= 10;
    }
    cout <<"The sum of digits is "<<sum<<endl;
    return 0;

}






//Write a function called reverseIt that accepts an integer number and returns the reverse of the number



// Assignment
// Write c++ program that accepts an integer number and display to the screen whether the number is Armstrong
// a number is Armstrong if the sum of the cube of the digits is equal to the number


// Write a c++ program that accepts an integer number and determine whether the number is palindromic
// a palindromic number is a number whose reverse is equal to the number