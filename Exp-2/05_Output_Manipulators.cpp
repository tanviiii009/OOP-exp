#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value = 123.456789;

    cout << "Using setw():\n";
    cout << setw(15) << value << endl;

    cout << "\nUsing fixed and setprecision():\n";
    cout << fixed << setprecision(2) << value << endl;

    cout << "\nUsing left and right:\n";
    cout << left << setw(15) << "Name" << right << setw(10) << "Marks" << endl;
    cout << left << setw(15) << "Student" << right << setw(10) << 95 << endl;

    return 0;
}
