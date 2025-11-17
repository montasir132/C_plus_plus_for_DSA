# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int a[n]; // stack variable
    int *a=new int[n]; // Dynamic variable
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}