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
        string s;
        cin>>s;
        string add;
        for (int i = 0; i <n; i++)
        {
            add+=s;
        }
        for (int i = 0; i <add.size(); i++)
        {
            cout<<add[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}