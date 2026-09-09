#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void getData() {
        cout << "Enter value: ";
        cin >> value;
    }
    friend void compare(Number a, Number b);
};

void compare(Number a, Number b) {
    if (a.value > b.value)
        cout << "First object is greater." << endl;
    else if (b.value > a.value)
        cout << "Second object is greater." << endl;
    else
        cout << "Both objects are equal." << endl;
}

int main() {
    Number n1, n2;
    cout << "First object:\n";
    n1.getData();
    cout << "Second object:\n";
    n2.getData();
    compare(n1, n2);
    return 0;
}
