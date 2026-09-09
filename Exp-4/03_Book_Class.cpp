#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    float price;
public:
    void getData() {
        cout << "Enter book title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    b.getData();
    b.display();
    return 0;
}
