#include<bits/stdc++.h>
using namespace std;
class student
{
        public:
        string name;
        int roll;
        int english;
        int math;

    student(string name,int roll,int english,int math) //constructor
    {
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }

    void Total()//function
    {
        cout<<"Total marke of "<<name<<" = "<<english+math<<endl;
    }
};
int main()
{
    student sakib("sakib mia",23,55,80);
    sakib.Total();
    
    student rakib("Rakib siddiky",23,70,90);
    rakib.Total();
    return 0;
}