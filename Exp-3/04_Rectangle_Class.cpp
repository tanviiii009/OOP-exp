#include <iostream>
using namespace std;
class Rectangle{float length,breadth;public:void getData(){cout<<"Enter length and breadth: ";cin>>length>>breadth;}void area(){cout<<"Area of rectangle = "<<length*breadth<<endl;}};
int main(){Rectangle r;r.getData();r.area();return 0;}
