#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mod,mul= (a*b*c*d);
    if(mul>1000000000)    
    {
        mod=mul%100;
    }
    else{
        mod='00';
    }
    cout<<mod;
    return 0;
}