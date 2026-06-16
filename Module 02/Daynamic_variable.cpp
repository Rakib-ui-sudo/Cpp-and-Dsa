#include<bits/stdc++.h>
using namespace std;
int *p;
void  fun()
{
    int *x = new int;//Daynamic vari able 
    *x=10;
    p = x;//duitai pointer variable.
    cout<<"Fun-->"<<*p<<endl;
    return;
}
int main()
{
    // int x = 10;//static
    // int *p = new int;//Daynamic vari able 
    // *p = 100;
    // cout<<*p<<endl;
    fun();
    int *a = new int;
    delete a;//Dynamic variable delete.
    cout<<"Main-->"<<*p<<endl;
    return 0;
}