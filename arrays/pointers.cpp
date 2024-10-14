#include <iostream>
using namespace std;


void swap(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;

};

int main(){
    int a = 3, b = 7;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
    system("PAUSE");

    return 0;
}