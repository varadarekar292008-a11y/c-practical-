#include<iostream>
using namespace std;

class Calculator
{
public:
    float add(float a,float b)
    {
        return a+b;
    }
    float sub(float a,float b)
    {
        return a-b;
    }
    float mul(float a,float b)
    {
        return a*b;
    }
    float divide(float a,float b)
    {
        return a/b;
    }
};

int main()
{
    Calculator c;
    float x,y;
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<"addition = "<<c.add(x,y)<<endl;
    cout<<"subtraction = "<<c.sub(x,y)<<endl;
    cout<<"multiplication = "<<c.mul(x,y)<<endl;
    cout<<"division = "<<c.divide(x,y)<<endl;
    return 0;
}