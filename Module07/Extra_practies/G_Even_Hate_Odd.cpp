#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int even = 0, odd = 0, count = n / 2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            //------------------------
            if (count == even)
            {
                if (count == odd)
                {
                    cout << "0"<<endl;
                }
            }
            else if (count != even)
            {
                int ans = 0;
                if (even<count)
                {
                    for (int i = even; i < count; i++)
                    {
                        ans++;
                    }
                }
                else
                {
                    for (int i = count; i <even; i++)
                    {
                        ans++;
                    }
                    
                }
                cout<<ans<<endl;
            }

        }
    }

    return 0;
}