#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello sir";

    //s.clear();
    s.resize(7);//barano ji komanoji

    cout<<s.size()<<endl;

    if (s.empty()==true)
    {
        cout<<"emty";
    }
    else cout<<"not empty";
    

    return 0;
}