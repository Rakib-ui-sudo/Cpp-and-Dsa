#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    /*
    1.chake array ta k present asa na ni.
       -if k present print-1
       -na thake la max=k bana no possible.

    2.k ar koita missing asa bar korbo   ai count i answe hoba.

    */
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int flag=1;
    for (int i = 0; i <n; i++)
    {
        if (a[i]==k)//K missing number scarch.
        {
           flag=2;
           break;
        }
        
    }
    if (flag==2)
    {
        /* k present*/
        cout<<"-1"<<endl;
    }
    else{
        //k missing.
        int count=0;
        for (int i = 0; i <k; i++)
        {
            //dakebo i missing ki nah.
            //missing  hola ans barhoba.
            int present =0;
            for (int j = 0; j <n; j++)
            {//searching i.
                if (a[j]==i)
                {   
                    //i array ta present asa.
                    present=1;
                    break;
                }
                
            }
            if (present==0)//i array ta ni.
            {
                count++;
            }  
            
        }
        cout<<count<<endl;
        
    }
    

    return 0;
}