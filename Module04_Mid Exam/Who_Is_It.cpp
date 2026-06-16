#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int Id;
    char Name[101];
    char Section;
    int Total_Marks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student a, b, c;

        cin >> a.Id >> a.Name >> a.Section >> a.Total_Marks;
        cin >> b.Id >> b.Name >> b.Section >> b.Total_Marks;
        cin >> c.Id >> c.Name >> c.Section >> c.Total_Marks;

        Student ans;

        if (a.Total_Marks > b.Total_Marks && a.Total_Marks > c.Total_Marks)
        {
            ans = a;
        }
        //-->>
        else if (b.Total_Marks > a.Total_Marks && b.Total_Marks > c.Total_Marks)
        {
            ans = b;
        }
        //---->>
        else if (c.Total_Marks > a.Total_Marks && c.Total_Marks > b.Total_Marks)
        {
            ans = c;
        }
        //---------------->2nd Test--------------------------------------------------->>>>a
        if (a.Total_Marks == b.Total_Marks&&c.Total_Marks<a.Total_Marks&&c.Total_Marks<b.Total_Marks)
        {
            if (a.Id < b.Id)
            {
                ans = a;
            }
            else
            {
                ans = b;
            }
        }

       
        else if (c.Total_Marks == b.Total_Marks&&a.Total_Marks<b.Total_Marks&&a.Total_Marks<c.Total_Marks)
        {

            if (b.Id < c.Id)
            {
                ans = b;
            }
            else
            {
                ans = c;
            }
        }
        
        
        //>>>>>>>>>>>>>>>>>>>>>>>>

        else if (c.Total_Marks == a.Total_Marks&&b.Total_Marks<c.Total_Marks&&b.Total_Marks<a.Total_Marks)
        {

            if (a.Id < c.Id)
            {
                ans = a;
            }
            else
            {
                ans = c;
            }
        }
        //----Test3------->>>
        if (a.Total_Marks == b.Total_Marks && a.Total_Marks == c.Total_Marks)
        {
            if (a.Id < b.Id && a.Id < c.Id)
            {
                ans = a;
            }
            else if (b.Id < a.Id && b.Id < c.Id)
            {
                ans = b;
            }
            else if (c.Id < a.Id && c.Id < b.Id)
            {
                ans = c;
            }
        }


        //-----------------end--------------------

        cout << ans.Id << " "
             << ans.Name << " "
             << ans.Section << " "
             << ans.Total_Marks << endl;
    }

    return 0;
}