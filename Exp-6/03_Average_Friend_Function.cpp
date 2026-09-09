#include <iostream>
using namespace std;

class Numbers {
    float a, b, c;
public:
    void getData() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    friend void average(Numbers n);
};

void average(Numbers n) {
    cout << "Average = " << (n.a + n.b + n.c) / 3 << endl;
}

int main() {
    Numbers n;
    n.getData();
    average(n);
    return 0;
}
