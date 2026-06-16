#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
        // (*this).roll=roll;   //class o constructor akoi variable 
        // (*this).cls =cls;    //nila avabai nita hoba..>>(this->) pointer ar moto kaj ora.
        // (*this).gpa =gpa;
        this->roll=roll;
        this->cls = cls;
        this->gpa = gpa;

    }
};

int main()
{
     Student rakib(12,5,4.5); //akhana rakib hocha student class ar object.

    cout << "Roll class Gpa\n"
         << rakib.roll << " "
         << rakib.cls << "  "
         << rakib.gpa << endl;

    return 0;
}