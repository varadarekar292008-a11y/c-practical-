#include<iostream>
using namespace std;
class Employee
{
    public:

        int empid;
        string name;
        float salary;
    };
    
    int main()
    {
        Employee e;
        cout <<"enter the empid:";
        cin>>e.empid;
        cout<<"enter the name :";
        cin>>e.name;
        cout<<"enter the salary:";
        cin>>e.salary;
        return 0;
    }
    
