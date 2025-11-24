#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,rem,sum=0;
    cin>>n;
    n=abs(n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(n==sum){
        cout<<sum<<endl<<"armstrong number"<<endl;
    }
    else{
        cout<<sum<<endl<<"not armstrong number"<<endl;
    }
    return 0;
}