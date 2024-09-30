#include <iostream>
using namespace std;

//1
//1 2
//1 2 3
//1 2 3 4

int main(){
    //Using a for loop
    for(int r = 1; r <= 10; r++){
        for(int c = 1; c <= r; c++){
            cout << c <<" ";
        }
        cout<<endl;
    }

    //Using a while loop
    // int r= 1;
    // while(r <= 10){
    //     int c = 1;
    //     while(c <= r){
    //         cout << c << " ";
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }

        
}