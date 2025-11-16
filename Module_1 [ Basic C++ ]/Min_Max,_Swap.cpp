// #include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    // if(x<y){
    //     cout<<x<<endl;
    // }
    // else{
    //     cout<<y<<endl;
    // }

    cout<<"Mini = "<< min(x,y)<<endl;
    cout<<"Max = "<< max(x,y)<<endl;
    
    // int tmp =x;
    // x=y;
    // y=tmp;
    swap(x,y);
    cout<<x <<" "<<y<<endl;

    return 0;
}