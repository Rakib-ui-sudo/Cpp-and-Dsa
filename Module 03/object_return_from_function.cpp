#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)//class constructor vr aloi houi.
    {
        this->roll=roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
     Student rakib(3,5,4.5); 
     return rakib;
}
int main()
{
     Student rakib = fun();
    cout << "Roll class Gpa\n"
         << rakib.roll << " "
         << rakib.cls << "  "
         << rakib.gpa << endl;

    return 0;
}