#include <iostream>
using namespace std;

class Employee {
    static int total;
public:
    Employee() {
        total++;
    }
    static void displayTotal() {
        cout << "Total number of employees = " << total << endl;
    }
};

int Employee::total = 0;

int main() {
    Employee e1, e2, e3, e4;
    Employee::displayTotal();
    return 0;
}
