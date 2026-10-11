#include<iostream>
using namespace std;

class Array
{
public:
    int a[10];

    void accept()
    {
        int i;
        cout<<"enter 10 numbers: "<<endl;
        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }

    void display()
    {
        int i;
        cout<<"array elements are: "<<endl;
        for(i=0;i<10;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Array arr;
    arr.accept();
    arr.display();
    return 0;
}
