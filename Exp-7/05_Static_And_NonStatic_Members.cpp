#include <iostream>
using namespace std;

class Student {
    int rollNo;
    static int count;
public:
    void setRollNo(int r) {
        rollNo = r;
        count++;
    }

    void display() {
        cout << "Roll Number = " << rollNo << endl;
    }

    static void displayCount() {
        cout << "Total students = " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;
    s1.setRollNo(101);
    s2.setRollNo(102);
    s1.display();
    s2.display();
    Student::displayCount();
    return 0;
}
