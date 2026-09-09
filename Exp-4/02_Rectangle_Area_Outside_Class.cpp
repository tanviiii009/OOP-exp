#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
public:
    void getData();
    void calculateArea();
};

void Rectangle::getData() {
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
}

void Rectangle::calculateArea() {
    cout << "Area of rectangle = " << length * breadth << endl;
}

int main() {
    Rectangle r;
    r.getData();
    r.calculateArea();
    return 0;
}
