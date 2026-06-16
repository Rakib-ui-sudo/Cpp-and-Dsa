#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);  //Hello I am Rakib 
    cout<<s<<endl;

    stringstream ss(s);
    string word;
    int cnt=0;
    while (ss>>word)
    {
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt;
    // ss>>word;
    // cout<<word<<endl; //Hello

    // ss>>word;
    // cout<<word<<endl;//I
    // ss>>word;
    // cout<<word<<endl; //am
    // ss>>word;
    // cout<<word<<endl;//Rakib

    return 0;
}