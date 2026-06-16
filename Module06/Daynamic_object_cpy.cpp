#include<bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
    string country;
    int jersey;

    cricketer(string country,int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    cricketer* dhoni= new cricketer("Bangladesh",5);//dynamic mamory
    cricketer* kholi= new cricketer("India",3);
    //kholi=dhoni;
    // kholi->country=dhoni->country;
    // kholi->jersey=dhoni->jersey;
    *kholi=*dhoni;

    delete dhoni;
    cout<<kholi->country<<" "<<kholi->jersey;
    
    return 0;
}