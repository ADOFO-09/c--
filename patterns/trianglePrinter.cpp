#include <iostream>
using namespace std;


//       *
//    *   *   *
//*   *   *   *   *
int main(){
    for(int r=1; r <= 7; r++){
        for(int s=1; s <= 7-r; s++){
            cout << " ";
        }
        for(int c=1; c <= 2*r-1; c++){
                cout << "*";
            }
            cout << endl;
        
    }
}