#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int markes;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].markes;
    }
    //int mn = INT_MAX;
    Student mn;
    mn.markes=INT_MAX;
    for (int i = 0; i <n; i++)
    {
        if (a[i].markes<mn.markes)
        {
            mn = a[i];
        }
        
       // mn=min(a[i].markes,mn);
        
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.markes<<endl;
    
    return 0;
}
