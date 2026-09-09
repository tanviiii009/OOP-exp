#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void getData() {
        cout << "Enter ID and name: ";
        cin >> id >> name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee e[5];
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << ":\n";
        e[i].getData();
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 5; i++)
        e[i].display();
    return 0;
}
