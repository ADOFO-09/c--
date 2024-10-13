#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

Point mypoints[20];


int main(){
    Point mypoints[20];
    mypoints[0].x = 2;
    mypoints[0].y = 3;
    mypoints[1].x = 5;
    mypoints[1].y = 8;
    mypoints[2].x = 6;
    mypoints[2].y = 2;

    for(int i=0; i < 3; i++){
        cout<<"P"<<(i + 1) <<"("<< mypoints[i].x<<","<<mypoints[i].y<<")"<< endl;
    }

    return 0;
}
