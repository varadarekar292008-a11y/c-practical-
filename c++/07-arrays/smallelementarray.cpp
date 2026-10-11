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

    void smallest()
    {
        int i,min;
        min=a[0];
        for(i=1;i<10;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        cout<<"smallest element = "<<min<<endl;
    }
};

int main()
{
    Array arr;
    arr.accept();
    arr.smallest();
    return 0;
}
