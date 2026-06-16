#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int mid=n/2;
    int median=-1;
    for (int i = 0; i <n; i++)
    {
        int cnt=0;
        for (int j = 0; j <n; j++)
        {
            if (a[j]<a[i])
            {
                cnt++;
            }
        }

        if (cnt==mid)
        {
            median=a[i];
            break;
        }    
    }

    int ans = __INT_MAX__;
    for (int i = 0; i <n; i++)
    {
        if (median==a[i])
        {
            ans=abs(mid-i);
            break;
        }
        
    }
    
    cout<<ans;
    
    return 0;
}