// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem,temp,sum=0;
    cin>>n;
    n=abs(n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    if(n==sum){
        cout<<sum<<endl<<"YES"<<endl;
    }else{
        cout<<sum<<endl<<"NO"<<endl;
    }
    return 0;
}