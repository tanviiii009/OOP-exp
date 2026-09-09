#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void getData() {
        cout << "Enter value for class A: ";
        cin >> x;
    }
    friend void add(A, B);
};

class B {
    int y;
public:
    void getData() {
        cout << "Enter value for class B: ";
        cin >> y;
    }
    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum = " << a.x + b.y << endl;
}

int main() {
    A a;
    B b;
    a.getData();
    b.getData();
    add(a, b);
    return 0;
}
