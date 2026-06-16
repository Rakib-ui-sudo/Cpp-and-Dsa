#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);//Rahat Rahat skib and Jessica Ratu Munna
    int flag=0;
    stringstream ss(s);
    string word;

    string x="Jessica";
    while (ss>>word)
    {
        if (word==x)
        {
            flag+=1;
        } 
    }
    
    if (flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    

    return 0;
}