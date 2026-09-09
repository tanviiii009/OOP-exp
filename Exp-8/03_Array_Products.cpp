#include <iostream>
#include <string>
using namespace std;

class Product {
    int id;
    string name;
    float price;
public:
    void getData() {
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product p[10];
    if (n > 10) n = 10;
    for (int i = 0; i < n; i++) {
        cout << "Product " << i + 1 << ":\n";
        p[i].getData();
    }
    cout << "\nProduct Information:\n";
    for (int i = 0; i < n; i++)
        p[i].display();
    return 0;
}
