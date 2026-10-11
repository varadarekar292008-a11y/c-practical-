#include<iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void setNum(int n)
    {
        num=n;
    }

    int getNum()
    {
        return num;
    }
};

int main()
{
    Number obj;
    obj.setNum(50);
    cout<<"number = "<<obj.getNum()<<endl;
    obj.setNum(75);
    cout<<"after modify, number = "<<obj.getNum()<<endl;
    return 0;
}