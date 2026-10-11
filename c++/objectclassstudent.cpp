#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    float marks;
    void display()
    {
        cout << "roll no:" << rollno << endl;
        cout << "name:" << name << endl;
        cout << "marks:" << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.rollno = 101;
    cout << "enter the name:";
    cin >> s1.name;
    cout << "enter marks:";
    cin >> s1.marks;
    s1.display();
    return 0;
}