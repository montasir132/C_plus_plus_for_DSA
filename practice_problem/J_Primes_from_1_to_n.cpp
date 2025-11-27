#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    if(n==1){
        flag=0;
    }
    for(int i=2;i<n;i++){
        if(i%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}