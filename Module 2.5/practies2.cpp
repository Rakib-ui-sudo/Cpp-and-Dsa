#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int *a = new int[n];

    for (int i = 0; i < n; i++) //a input
    {
        cin >> a[i];
    }
    
    int m;
    cin>>m;
    int *b = new int[m];

    for (int i = 0; i < n; i++)//a thakea b ta copy
    {
        b[i] = a[i];
    }
    for (int i = n; i <m; i++) //b input
    {
        cin>>b[i];
    }

    delete[] a; //a array delete.
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}