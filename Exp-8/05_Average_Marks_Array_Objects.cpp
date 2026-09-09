#include <iostream>
using namespace std;

class Student {
    float marks;
public:
    void getData() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    float getMarks() {
        return marks;
    }
};

int main() {
    Student s[5];
    float total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        s[i].getData();
        total += s[i].getMarks();
    }

    cout << "Average marks = " << total / 5 << endl;
    return 0;
}
