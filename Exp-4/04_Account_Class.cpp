#include <iostream>
#include <string>
using namespace std;

class Account {
    int accountNo;
    string name;
    double balance;
public:
    void getData() {
        cout << "Enter account number: ";
        cin >> accountNo;
        cout << "Enter account holder name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter balance: ";
        cin >> balance;
    }
    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    a.getData();
    a.display();
    return 0;
}
