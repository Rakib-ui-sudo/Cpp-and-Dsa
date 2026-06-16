#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;

    //constructor permutation
    int small=1,large = n;
    for (int i = 1; i <=n; i++)
    {
        //chake the index even or odd.   
        if (i%2==0)//chaking even number
        {
            cout<<large<<" ";
            large--;
        }
        else//chaking odd number.
        {
           cout<<small<<" ";
           small++;
        }
        
    }
    
    return 0;
}
