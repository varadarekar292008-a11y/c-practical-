#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length,breadth;

    Rectangle()
    {
        length=10;
        breadth=5;
    }

    void area()
    {
        cout<<"length = "<<length<<endl;
        cout<<"breadth = "<<breadth<<endl;
        cout<<"area = "<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle r;
    r.area();
    return 0;
}