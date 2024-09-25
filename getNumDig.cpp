#include <iostream>
using namespace std;

// Write c++ program that accepts an integer number and displays the sum of the digits of the number to the screen 
// eg: 
// Enter an integer number: 123
// The sum of the digits of 123 is 6

int getNumDig(int n){
    if(n==0) return 1;
    int count = 0;
    while(n > 0){
        n/= 10;
        count++;
    }
    return count;

}


int main(){
    int a;
    cout<<"Enter a number: ";
    cin>> a;

    cout<<"The number of digits of "<< a <<" is "<<getNumDig(a) << endl;

}