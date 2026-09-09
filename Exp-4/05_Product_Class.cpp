#include <iostream>
#include <string>
using namespace std;

class Product {
    int productId;
    string name;
    float price;
public:
    void getData() {
        cout << "Enter product ID: ";
        cin >> productId;
        cout << "Enter product name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter product price: ";
        cin >> price;
    }
    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p;
    p.getData();
    p.display();
    return 0;
}
