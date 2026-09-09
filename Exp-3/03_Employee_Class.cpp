#include <iostream>
#include <string>
using namespace std;
class Employee{int id;string name;public:void getData(){cout<<"Enter employee ID: ";cin>>id;cout<<"Enter employee name: ";cin>>ws;getline(cin,name);}void display(){cout<<"Employee ID: "<<id<<endl;cout<<"Employee Name: "<<name<<endl;}};
int main(){Employee e;e.getData();e.display();return 0;}
