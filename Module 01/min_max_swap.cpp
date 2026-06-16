// #include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>//Ati babo har korla ar kono header file add kra lagba nah.
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    // if (a<b)
    // {
    //     cout<<a;
    // }
    // else
    // {
    //     cout<<b;
    // }
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    cout<<max({1, 45, 68,90})<<endl;

    // //SWAP
    // int tmp =a;
    // a=b;
    // b=tmp;

    swap(a,b);
    cout<<a<<" "<<b<<endl;
}   