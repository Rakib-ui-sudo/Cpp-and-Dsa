#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
	int roll;
	char section[30];
	double math_marks;
	int cls;

    Student(char name[],int roll,char section[],double math_marks,int cls)
    {
        strcpy(this->name,name) ;

        this->roll=roll;

        strcpy(this->section,section);

        this->math_marks=math_marks;
        this->cls=cls;
    }
};
int main()
{
    Student rakib("Rakib",2,"A",95.5,12);
    Student riyad("Riyad",2,"A",92.5,12);
    Student arafath("Arafath",2,"A",98.5,12);

    if (rakib.math_marks>riyad.math_marks && rakib.math_marks>arafath.math_marks)
    {
       cout<<"Rakib";
    }
    else if (rakib.math_marks<riyad.math_marks && riyad.math_marks>arafath.math_marks)
    {
        cout<<"Riyad";
    }
     else if (arafath.math_marks>riyad.math_marks && rakib.math_marks<arafath.math_marks)
    {
        cout<<"Arafath";
    }
    
    return 0;
}