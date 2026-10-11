#include<iostream>
using namespace std;

class Test
{
public:
    int a;
    int b;
};

int main()
{
    Test t;
    t.a=10;
    t.b=20;
    cout<<"a = "<<t.a<<endl;
    cout<<"b = "<<t.b<<endl;
    cout<<"sum = "<<t.a+t.b<<endl;
    return 0;
}