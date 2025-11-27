#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,rem,sum=0;
    cin>>n;
    n=abs(n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    cout<<sum;
    return 0;
}