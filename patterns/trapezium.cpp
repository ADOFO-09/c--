#include <iostream>
using namespace std;

int main(){
    int topBase = 10, height = 5;
    int bottomBase = topBase + height - 1;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < bottomBase; j++){
            if(j >= height - i - 1 && j < topBase + i){
                cout << char(219);
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}