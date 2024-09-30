#include <iostream>
using namespace std;


void rightAngleTriangle(int height){
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= i; j++){
            cout << char(219);
        }
        cout << endl;
    }
}


void hollowRectangle(int width, int height){
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if(i == 1 || i == height || j == 1 || j == width){
                cout << char(219);
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}


void trapezium(int topBase, int height){
    int bottomBase = topBase + height - 1;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < bottomBase; j++){
            if(j >= height - i - 1 && j < topBase + i){
                cout << char(219);
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}


int main(){
    int option;
    cout << "Select a shape to display: \n";
    cout << "1. Right angle triangle\n";
    cout << "2. Hollow rectangle\n";
    cout << "3. Trapezium\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> option;

    if(option == 1){
        // Right Angle Triangle 
        int height;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        rightAngleTriangle(height);
    }
    else if (option == 2){
        // Hollow Rectangle 
        int width, height;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        hollowRectangle(width, height);
    }
    else if (option == 3){
        // Trapezium
        int topBase, height; 
        cout << "Enter the top base length of the trapezium: ";
        cin >> topBase;
        cout << "Enter the height of the trapezium: ";
        cin >> height;
        trapezium(topBase, height);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
