#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    string s2 = " sir";
    //s[0]='G';
    //s+=s2;
    //s.append(s2);
    //s.push_back('A'); //akti single char add kora ji.sas a
    //s.pop_back();  // str ar sas arti remov kora.
    //s=s2;
    //s.assign("HI");
   // s.erase(3,2);  // index thakea tar porar gulon kata limit kora ji jamon 3 thakea porar 2 ta kat ba.
   //s.replace(6,5,"Bangladesh");//delet na kortachila (6,0)
    s.insert(5,"rakib"); 
    cout<<s<<endl;
    
    return 0;
}