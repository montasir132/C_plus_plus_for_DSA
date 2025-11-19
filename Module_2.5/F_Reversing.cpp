// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int i=0;
    // int j=n-1;
    for(int j=n-1,i=0;i<j;i++,j--){
        swap(a[i],a[j]);
        // int tamp = a[i];
        // a[i]=a[j];
        // a[j]=tamp;
        // i++;
        // j--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}