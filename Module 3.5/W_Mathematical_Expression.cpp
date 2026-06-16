#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char x,y;
    cin>>a>>x
       >>b>>y>>c;
    
    if (x=='+')
    {
        int ans = a+b;
        if (ans==c)
        {
          cout<<"Yes";
        }
        else
        {
            cout<<ans;
        } 
    }
     if (x=='-')
    {
        int ans = a-b;
        if (ans==c)
        {
          cout<<"Yes";
        }
        else
        {
            cout<<ans;
        } 
    }
     if (x=='*')
    {
        int ans = a*b;
        if (ans==c)
        {
          cout<<"Yes";
        }
        else
        {
            cout<<ans;
        } 
    }
    
    return 0;
}