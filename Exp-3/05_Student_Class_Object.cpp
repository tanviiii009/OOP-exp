#include <iostream>
#include <string>
using namespace std;
class Student{int rollNo;string name;float marks;public:void getData(){cout<<"Enter roll number: ";cin>>rollNo;cout<<"Enter name: ";cin>>ws;getline(cin,name);cout<<"Enter marks: ";cin>>marks;}void display(){cout<<"\nStudent Information\n";cout<<"Roll Number: "<<rollNo<<endl;cout<<"Name: "<<name<<endl;cout<<"Marks: "<<marks<<endl;}};
int main(){Student s;s.getData();s.display();return 0;}
