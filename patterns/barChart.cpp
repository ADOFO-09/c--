#include <iostream>
using namespace std;

int main(){
    for(int r=1; r<=5; r++){
        cout<<r<<"|";
        for(int c=1; c<=2*r; c++){
            cout<< char(219);
        }
        cout<<endl<<" |\n";
    }
    
}