#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
public:
    void getData();
    void display();
};

void Student::getData() {
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: ";
    cin >> ws;
    getline(cin, name);
}

void Student::display() {
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Student s;
    s.getData();
    s.display();
    return 0;
}
