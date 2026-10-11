#include<iostream>
using namespace std;

class Rectangle
{
public:
    float length,breadth;

    float area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r;
    cout<<"enter the length: ";
    cin>>r.length;
    cout<<"enter the breadth: ";
    cin>>r.breadth;
    cout<<"area = "<<r.area()<<endl;
    return 0;
}