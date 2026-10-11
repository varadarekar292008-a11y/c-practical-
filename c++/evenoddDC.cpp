#include<iostream>
using namespace std;

class Number
{
public:
    int n;

    Number()
    {
        n=7;
    }

    void check()
    {
        cout<<"number = "<<n<<endl;
        if(n%2==0)
        {
            cout<<"it is even"<<endl;
        }
        else
        {
            cout<<"it is odd"<<endl;
        }
    }
};

int main()
{
    Number obj;
    obj.check();
    return 0;
}