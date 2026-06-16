#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    int ans = -1; //find answer.
    for (int i = 0; i <x; i++)//update answer.
    {
        if (a[i]<=y)//Rohim can afford.
        {
            if (a[i]>ans)//ans small.
            {
                ans=a[i];
            }
            
        }
        
    }
    //print answer.
    cout<<ans;
    return 0;
}