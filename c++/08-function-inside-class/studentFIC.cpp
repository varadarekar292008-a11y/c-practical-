#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void display()
    {
        cout<<"roll no: "<<rollNo<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }
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
    s.display();
    return 0;
}