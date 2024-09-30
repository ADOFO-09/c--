#include <iostream>
using namespace std;

int main(){
    // int breadth=5, length=10;
    // for(int r=1; r<=breadth; r++){
    //     for(int c=1; c<=length*2; c++){
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }    

    // hollow rectangle 
    int height=5, width=10;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if(i == 1 || i == height || j == 1 || j == width) {
                cout << char(219);
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}