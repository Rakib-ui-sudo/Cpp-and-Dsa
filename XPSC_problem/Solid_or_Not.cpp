#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--)
    {
        long long int n;
        cin>>n;
        if (n==1)
        {
          cout<<"NO"<<endl;
          continue;
        }
        int prime=1;
        for (int i = 2; i*i <=n; i++)//time complexity..i*i<=n
        {
            if (n%i==0)
            {
                prime=0;
            }
            
        }
        if (prime==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }    

    }
    
    return 0;
}