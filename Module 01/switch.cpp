#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x)
    {
       case 1:
        cout<<"saturday\n";
        break;

       case 2:
        cout<<"sunmday\n";
        break;

       case 3:
        cout<<"Monday\n";
        break;

       case 4:
        cout<<"Wednesday\n"; 
        break;

       case 5:
        cout<<"Tuesday\n";
        break;
        
        case 6:
        cout<<"Thuesday\n";
        break;

        default :
         cout<<"Plese enter Day";
    }
    return 0;
}