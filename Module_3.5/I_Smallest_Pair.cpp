// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int res=2e9;//2*10^9
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // printf("%d-%d\n",arr[i],arr[j]);
                int val = arr[i]+arr[j]+j-i;
                if(val<res)
                {
                    res=val;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}