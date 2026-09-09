#include <iostream>
using namespace std;

class Numbers {
    int a, b;
public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    friend void maximum(Numbers n);
};

void maximum(Numbers n) {
    if (n.a > n.b)
        cout << "Maximum = " << n.a << endl;
    else
        cout << "Maximum = " << n.b << endl;
}

int main() {
    Numbers n;
    n.getData();
    maximum(n);
    return 0;
}
