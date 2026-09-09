#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    int temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += (int)pow(remainder, digits);
        temp /= 10;
    }
    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;
    return 0;
}
