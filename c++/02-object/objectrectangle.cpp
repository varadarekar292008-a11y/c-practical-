#include<iostream>
using namespace std;

class Rectangle
{
public:
    float length;
    float breadth;
};

int main()
{
    Rectangle r2;
    cout<<"enter the length: ";
    cin>>r2.length;
    cout<<"enter the breadth: ";
    cin>>r2.breadth;
    cout<<"area: "<<r2.length*r2.breadth<<endl;
    cout<<"perimeter: "<<2*(r2.length+r2.breadth)<<endl;
    return 0;
}