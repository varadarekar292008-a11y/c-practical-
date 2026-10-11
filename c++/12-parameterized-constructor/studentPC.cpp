#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    Student(int r,string n,float m)
    {
        rollNo=r;
        name=n;
        marks=m;
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
    Student s(101,"rahul",85.5);
    s.display();
    return 0;
}