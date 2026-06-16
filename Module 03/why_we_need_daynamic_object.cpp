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

Student* fun()
{
    Student korim(4,8,4.90);
    Student*p=&korim;
    return p;
}

int main()
{
    Student* k =  fun();
    cout<<k->roll<<" "
        <<k->cls<<" "
        <<k->gpa<<endl;
    
    return 0;
}