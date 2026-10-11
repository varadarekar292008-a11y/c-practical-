#include<iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    void setData(int r,float m)
    {
        rollNo=r;
        marks=m;
    }

    void display()
    {
        cout<<"roll no: "<<rollNo<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;
    s.setData(101,85.5);
    s.display();
    return 0;
}