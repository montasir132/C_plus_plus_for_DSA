#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,re,temp,sum=0;
    cin>>n;
    n=abs(n);
    temp=n;
    while (temp!=0)
    {
        re=temp%10; // remainder the last digit
        sum+=re;
        temp=temp/10; // vagfol the last digit
    }
    cout<<sum;
    return 0;
}