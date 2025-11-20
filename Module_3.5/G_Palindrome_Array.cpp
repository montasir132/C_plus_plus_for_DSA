// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int indecator=1;//test
    int l=0,r=n-1;
    while(l < r)
    {
        if(ar[l] != ar[r])
        {
            indecator=0;
            break;
        }
        l++,r--;
    }
    if(indecator==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    } 
    return 0;
}