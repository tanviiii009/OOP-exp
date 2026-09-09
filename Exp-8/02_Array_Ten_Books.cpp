#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    float price;
public:
    void getData() {
        cout << "Enter title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book b[10];
    for (int i = 0; i < 10; i++) {
        cout << "Book " << i + 1 << ":\n";
        b[i].getData();
    }
    cout << "\nBook Details:\n";
    for (int i = 0; i < 10; i++)
        b[i].display();
    return 0;
}
