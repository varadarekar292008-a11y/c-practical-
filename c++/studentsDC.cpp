#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    Student()
    {
        rollNo=1;
        name="rahul";
        marks=80;
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
    s.display();
    return 0;
}