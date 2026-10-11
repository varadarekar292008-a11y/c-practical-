#include <iostream>
using namespace std;
class Rectangle
{
    public:
    float length;
    float breadth;
    float area(){
        return length*breadth;
    }
    
};
int main (){
    Rectangle r;
    cout<<"enter lenght";
    cin>>r.length;
cout <<"enter breadth";
cin>>r.breadth;
cout <<"area="<<r.area()<<endl;
return 0;
}