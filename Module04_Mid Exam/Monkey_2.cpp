#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];

    while (cin.getline(s, sizeof(s)))
    {
        int val = strlen(s);
        //sort(s, s + val);
        char a[val];
        int j=0;
        for (int i = 0; s[i]!='\0'; i++)
        {
            if (s[i]!=' ')
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                   a[j]=s[i];
                   j++;
                }
            }
        }
        a[j]='\0';//line End..
        //cout<<j;
        int val_a=strlen(a);
        sort(a,a+val_a);
        cout <<a<< endl;
    }

    // ekmnoy
    // eefilloorvw -->>ans.

    return 0;
}