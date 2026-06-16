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
       
        this->roll=roll;
        this->cls = cls;
        this->gpa = gpa;

    }
};

int main()
{
     Student rakib(12,5,4.5); 
     Student* k = new Student(10,9,4.67);//daynamic object

    cout << "Roll class Gpa\n"
         << rakib.roll << " "
         << rakib.cls << "  "
         << rakib.gpa << endl;

    cout <<k->roll << ", "
         << k->cls << ",  "
         << k->gpa << endl;

    return 0;
}