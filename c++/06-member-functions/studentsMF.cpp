#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void accept()
    {
        cout<<"enter the roll no: ";
        cin>>rollNo;
        cout<<"enter the name: ";
        cin>>name;
        cout<<"enter the marks: ";
        cin>>marks;
    }

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
    s.accept();
    s.display();
    return 0;
}