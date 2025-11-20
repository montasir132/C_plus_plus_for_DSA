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
    // sort(a,a+4); // 1st 4ta
    // sort(a+2,a+n); // 1st 2 ta bade baki sob sort()
    cout<<"ascending sort-"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    // descending sort(staring , staring+n,greater<datatype>())
    sort(a, a+n, greater<int>());
    cout<<"descending sort-"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}