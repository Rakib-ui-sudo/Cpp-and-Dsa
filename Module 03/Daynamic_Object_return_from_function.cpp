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
        this->cls=cls;
        this->gpa=gpa;
    }
};

Student* fun() //* diyea return korla Daynamc Object paoua ji..
{
     Student* karim = new Student (4,8,4.9);
     return karim;
}

int main()
{
    Student* k =  fun();
    cout<<k->roll<<" "
        <<k->cls<<" "
        <<k->gpa<<endl;
    
    return 0;
}