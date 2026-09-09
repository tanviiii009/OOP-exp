#include <iostream>
using namespace std;

inline float area(float radius) {
    return 3.14159f * radius * radius;
}

int main() {
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle = " << area(radius) << endl;
    return 0;
}
