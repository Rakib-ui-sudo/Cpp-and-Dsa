#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100002];

    while (cin.getline(s, sizeof(s)))
    {
        int val = strlen(s);
        sort(s, s + val);
        for (int i = 0; i < val; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                    cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}
