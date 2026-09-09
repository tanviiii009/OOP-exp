#include <iostream>
using namespace std;

class Demo {
public:
    static int value;

    void changeValue(int v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int Demo::value = 0;

int main() {
    Demo d1, d2;
    d1.changeValue(50);
    cout << "Using first object: ";
    d1.display();
    cout << "Using second object: ";
    d2.display();
    return 0;
}
