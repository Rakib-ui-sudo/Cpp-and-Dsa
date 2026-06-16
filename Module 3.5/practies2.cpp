#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer; // Dynamic object DHONI
    dhoni->jersey_no = 10;

    char tmp[100] = "INDA";
    strcpy(dhoni->country, tmp);
    //-------------------------------------------------------------------------------------
    Cricketer *kohli = new Cricketer;    // Dynamic object KHOLI
    kohli->jersey_no = dhoni->jersey_no; // dreference kora asin korano hoia cha.

    strcpy(kohli->country, dhoni->country);

    delete dhoni;

    cout << kohli->jersey_no << endl
         << kohli->country << endl;

    return 0;
}