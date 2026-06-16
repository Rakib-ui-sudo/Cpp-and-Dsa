#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x%2)
    {
       case 0:
        cout<<"even\n";
        break;

       case 1:
        cout<<"Odd\n";
        break;

        default :
         cout<<"Plese enter Number";
    }
    return 0;
}