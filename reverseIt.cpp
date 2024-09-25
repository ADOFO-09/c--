#include <iostream>
using namespace std;

int reverseIt(int n){
    int sum = 0;
    while(n != 0){
        sum = sum*10 + n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "The reverse of "<< a << " is "<< reverseIt(a) << endl;

};