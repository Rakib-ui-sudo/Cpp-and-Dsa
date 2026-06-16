#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;    //5
    cin>>n;
    int a[n];  //50 60 40 30 20
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    //sort(a+2,a+n); //choto thakea borota sajano..//sort(start,end)
    //sort(a,a+n-1); 
    sort(a,a+n); // ascending.
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sort(a,a+n,greater<int>());//descending.//big to small
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}