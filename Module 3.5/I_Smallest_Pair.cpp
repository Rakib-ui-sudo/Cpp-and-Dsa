#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
       int n;
       cin>>n;
       int a[n+1];
       for (int i = 1; i <n+1; i++)
       {
          cin>>a[i];
       }
       
       int mn = INT_MAX;
       for (int i = 1; i <=n; i++)
       {
          for (int j = i+1; j <=n; j++)
          {
            int ans = (a[i]+a[j])+(j-i);

            mn=min(mn,ans);
            
          }
       }
       cout<<mn<<endl;
    }
    
    return 0;
}