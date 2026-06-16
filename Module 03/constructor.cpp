#include<bits/stdc++.h>
using namespace std;

class Student  //class
{
    public:
    int roll;
    int cls;
    double gpa;
 
    Student(int r,int c,double g)//constructor
    {
        roll=r;
        cls=c;
        gpa=g;
    }
    
};

int main()
{
    
    Student rakib(12,5,4.5);

    // Student rakib;
    // rakib.roll=12;
    // rakib.cls=5;
    // rakib.gpa=4.5;

    cout << "Roll class Gpa\n"
         << rakib.roll << " "
         << rakib.cls << "  "
         << rakib.gpa << endl;

    return 0;
}