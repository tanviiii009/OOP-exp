#include <iostream>
using namespace std;

class Bank {
    static int totalAccounts;
public:
    Bank() {
        totalAccounts++;
    }
    static void displayTotalAccounts() {
        cout << "Total number of accounts = " << totalAccounts << endl;
    }
};

int Bank::totalAccounts = 0;

int main() {
    Bank a1, a2, a3;
    Bank::displayTotalAccounts();
    return 0;
}
