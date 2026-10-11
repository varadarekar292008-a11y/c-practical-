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

    void largest()
    {
        int i,max;
        max=a[0];
        for(i=1;i<10;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        cout<<"largest element = "<<max<<endl;
    }
};

int main()
{
    Array arr;
    arr.accept();
    arr.largest();
    return 0;
}