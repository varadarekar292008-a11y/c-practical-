#include<iostream>
using namespace std;

class Calculator
{
public:
    float a,b;

    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float mul()
    {
        return a*b;
    }
    float divide()
    {
        return a/b;
    }
};

int main()
{
    Calculator c;
    cout<<"enter first number: ";
    cin>>c.a;
    cout<<"enter second number: ";
    cin>>c.b;
    cout<<"addition = "<<c.add()<<endl;
    cout<<"subtraction = "<<c.sub()<<endl;
    cout<<"multiplication = "<<c.mul()<<endl;
    cout<<"division = "<<c.divide()<<endl;
    return 0;
}