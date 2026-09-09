#include <iostream>
using namespace std;

class Student {
    int rollNo;
    float marks;
public:
    void getData() {
        cout << "Enter roll number and marks: ";
        cin >> rollNo >> marks;
    }
    void display() {
        cout << "Roll Number: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[5];
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":\n";
        s[i].getData();
    }
    cout << "\nStudent Marks:\n";
    for (int i = 0; i < 5; i++)
        s[i].display();
    return 0;
}
