#include<iostream>
using namespace std;

class Employee
{
public:
    int empId;
    float monthlySalary;
};

int main()
{
    Employee e1;
    float annual;
    cout<<"enter the emp id: ";
    cin>>e1.empId;
    cout<<"enter the monthly salary: ";
    cin>>e1.monthlySalary;
    annual=e1.monthlySalary*12;
    cout<<"annual salary: "<<annual<<endl;
    return 0;
}