#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l,Student r)
{
    int A = l.math_marks + l.eng_marks;
    int B = r.math_marks + r.eng_marks;
    if (A>B)
    {
        return true;
    }
    else if(A<B)
    {
        return false;
    }
    else 
    { 
         return l.id<r.id;  
    }
    
    
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s
           >>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    //-------------------------------------------
     sort(a,a+n,cmp);
    //---------------------------------------------------
    for (int i = 0; i <n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "
            <<a[i].s<<" "<<a[i].id<<" "
            <<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    
    
    return 0;
}