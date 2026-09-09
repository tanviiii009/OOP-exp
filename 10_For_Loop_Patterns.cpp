#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "\nPattern 1:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nPattern 2:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}
