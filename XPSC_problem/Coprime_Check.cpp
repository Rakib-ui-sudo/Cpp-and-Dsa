#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;

        // if (__gcd(x, y) == 1)
        //     cout << "YES"<<endl;
        // else
        //     cout << "NO"<<endl;
        int gcd = 1;

        for (int i = 1; i <= min(x, y); i++)
        {
            if (x % i == 0 && y % i == 0)
                gcd = i;
        }

        if (gcd == 1)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}