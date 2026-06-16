#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int markes;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i <n; i++)
    {
        cin.ignore();//enter remove kora
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].markes;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].markes<<endl;
    }
    
    
    return 0;
}

/*input          **--> output

3                 rakib siddky  2 98
rakib siddky      riyad siddky  9 90
2 98              arafat rafi 8 80
riyad siddky 
9 90
arafat rafi
 8 80

*/