// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/sort-it-6-3/problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    // ascending sort(staring , staring+n)
    sort(a,a+n); 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // descending sort(staring , staring+n,greater<datatype>())
    sort(a, a+n, greater<int>());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}