#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
public:
    void getData() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
    }
    friend void display(Employee e);
};

void display(Employee e) {
    cout << "Employee ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee e;
    e.getData();
    display(e);
    return 0;
}
