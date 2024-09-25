#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 9; i++){
        if(i % 2 == 0){
            cout << "* * * * * * ===================================== " << endl;
        }else{
            cout << " * * * * *  ===================================== " << endl;
        }
    }


    for(int i = 0; i < 6; i ++){
        cout << "================================================= " << endl;
    }

    return 0;
};