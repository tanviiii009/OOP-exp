#include <iostream>
using namespace std;

class ObjectCounter {
    static int count;
public:
    ObjectCounter() {
        count++;
    }
    static void displayCount() {
        cout << "Number of objects created = " << count << endl;
    }
};

int ObjectCounter::count = 0;

int main() {
    ObjectCounter a, b, c;
    ObjectCounter::displayCount();
    return 0;
}
