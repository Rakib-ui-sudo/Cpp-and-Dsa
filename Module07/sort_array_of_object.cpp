#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int markes;
};
bool cmp(Student l,Student r)
{
    if (l.markes>r.markes)
    {
        return true;
    }
    else if (l.markes<r.markes)
    {
        return false;
    }
    
    else
    {
         if (l.roll<r.roll)
         {
            return true;
         }
         else
         {
            return false;
         }
          
    }

    //return(l.markes==r.markes)?l.roll<r.roll:l.markes>r.markes; //Turnery oparator


   /*
    if (l.markes==r.markes)
    {
        return l.roll<r.roll;
    }
    else
    {
        return l.markes>r.markes;
    }
    */
}
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].markes;
    }
    
    sort(a,a+n,cmp);
    for (int i = 0; i <n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].markes<<endl;
    }
    
    return 0;
}

/*input              output..

4                       rakib 2 98
rakib 2 98              riyad 9 90
riyad 9 90              arafat 8 70
arafat 8 70             atik 10 70
atik 10 70

*/
