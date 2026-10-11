#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    float salary;
};

int main()
{
    Employee e;
    float annual;
    cout<<"enter the emp id: ";
    cin>>e.empId;
    cout<<"enter the name: ";
    cin>>e.name;
    cout<<"enter the monthly salary: ";
    cin>>e.salary;
    annual=e.salary*12;
    cout<<"name: "<<e.name<<endl;
    cout<<"annual salary: "<<annual<<endl;
    return 0;
}