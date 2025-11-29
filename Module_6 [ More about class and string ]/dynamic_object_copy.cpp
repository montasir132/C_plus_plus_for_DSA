#include<bits/stdc++.h>
using namespace std;
class  Cricketer{
    public:
    string country;
    int jersey;
    // Constructor
    Cricketer(string country,int jersey){
        this->country=country;
        this->jersey=jersey;
    }
};

int main()
{
    // dinamic 
    Cricketer* Doni=new Cricketer("India",100);
    Cricketer* Koli=new Cricketer("India",18);

    // Koli=Doni; // Segmentation fault

    // Koli->country=Doni->country;
    // Koli->jersey=Doni->jersey;

    *Koli=*Doni;

    delete Doni;
    cout<<Koli->country<<" "<<Koli->jersey;
    return 0;
}