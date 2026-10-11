#include<iostream>
using namespace std;

class Circle
{
public:
    float radius;

    Circle(float r)
    {
        radius=r;
    }

    void display()
    {
        cout<<"radius = "<<radius<<endl;
        cout<<"area = "<<3.14*radius*radius<<endl;
    }
};

int main()
{
    Circle c(7);
    c.display();
    return 0;
}