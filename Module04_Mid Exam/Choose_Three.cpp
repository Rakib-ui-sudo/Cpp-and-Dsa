#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, ans;
        cin >> n >> ans;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //--------------------------->>>>
        int match = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // cout<<j;
                for (int k = j + 1; k < n; k++)
                {
                    // cout<<a[i]<<a[j]<<a[k]<<endl;
                    match += a[i];
                    match += a[j];
                    match += a[k];

                    if (match == ans)
                    {
                        break;
                    }
                    else
                    {
                        match = 0;
                    }
                }

                if (match == ans)
                {
                    break;
                }
                else
                {
                    match = 0;
                }
            }
            if (match == ans)
            {
                break;
            }
            else
            {
                match = 0;
            }
        }
        //---------------------->>-------Combination---------->>>-------------->>>

        if (match != ans)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }

        // cout << match;

    } // T-->

    return 0;
}