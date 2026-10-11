#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s;
    cout<<"enter the roll no: ";
    cin>>s.rollNo;
    cout<<"enter the name: ";
    cin>>s.name;
    cout<<"enter the marks: ";
    cin>>s.marks;
    cout<<"roll no: "<<s.rollNo<<endl;
    cout<<"name: "<<s.name<<endl;
    cout<<"marks: "<<s.marks<<endl;
    return 0;
}