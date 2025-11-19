// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int sum=x+y,sub=x-y,mul=x*y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl<<x<<" * "<<y<<" = "<<mul<<endl<<x<<" - "<<y<<" = "<<sub<<endl;
    return 0;
}