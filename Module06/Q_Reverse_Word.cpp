#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);//speach add
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while (ss>>word)//protiti word input niba.
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    
    
   // cout<<s;
    return 0;
}