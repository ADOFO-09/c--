#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius) {
        this->radius = radius;
    }
    float getArea() {
        return 22.0 / 7.0 * radius * radius;
    }
    float perimeter() {
        return 44.0 / 7.0 * radius;
    }
};


class Rectangle {
private:
    int length, width;
public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }
    float getArea(){
        return length * width;
    }
    float getPerimeter(){
        return 2 * (length + width);
    }
};


int main() {
    int r,l,w ;
    cout << "Enter the radius of your circle: ";
    cin >> r;
    Circle yourCircle(r);
    cout << "The area of your circle is " << yourCircle.getArea() << endl;
    cout << "The perimeter of your circle is " << yourCircle.perimeter() << endl;

    cout << "Enter the length of rectangle: ";
    cin >> l;
    cout << "Enter the width of rectangle: ";
    cin >> w;
    Rectangle yourRect(l, w);
    cout << "The area of rectange is " << yourRect.getArea() << endl;
    cout << "The perimeter of rectangle is "<< yourRect.getPerimeter() << endl;

    return 0;
}
