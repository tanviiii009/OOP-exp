#include <iostream>
using namespace std;

int num = 100;

int main() {
    int num = 50;

    cout << "Local variable = " << num << endl;
    cout << "Global variable = " << ::num << endl;

    return 0;
}
