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
    Rectangle r;
    cout<<"enter the length: ";
    cin>>r.length;
    cout<<"enter the breadth: ";
    cin>>r.breadth;
    cout<<"area = "<<r.length*r.breadth<<endl;
    return 0;
}
