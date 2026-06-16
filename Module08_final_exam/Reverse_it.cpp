#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    string s;
    int id;

};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
    }
   //-----------------------------------Reverse  s
    string x;
    for (int i = 0; i < n; i++)
    {
        x+=a[i].s;
    }
    reverse(x.begin(),x.end());

    for (int i = 0; i <x.size(); i++)
    {
        a[i].s=x[i];
    }
    //cout<<x<<endl;
   //--------------------------------------------
    for (int i = 0; i <n; i++)
    {
        cout<<a[i].name<<" "
            <<a[i].cls<<" "
            <<a[i].s<<" "
            <<a[i].id<<endl;
    }
    
    return 0;
}