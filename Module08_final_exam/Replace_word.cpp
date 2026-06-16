#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        string s;
        cin>>s;   //rohimisagoodguy
        string x;
        cin>>x;//good
        
        while(s.find(x)!=string::npos)
        {
                int pos=s.find(x);
                int range= x.size();
                s.replace(pos,range,"#");
            
        }
        
        cout<<s;//rohimisa#guy
    }
    
    return 0;
}