// https://www.codechef.com/problems/CRICKETUDYAM
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        n=n-1;
        if(n>=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

