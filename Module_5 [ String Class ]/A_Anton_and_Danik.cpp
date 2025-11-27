// https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    char a='A',d='D';
    int total_a=0,total_d=0;
    for(auto it=s.begin();it<s.end();it++){
        // cout<<*it<<endl;
        if(*it==a){
            total_a++;
        }
        else if(*it==d){
            total_d++;
        }
    }
    if(total_a>total_d){
        cout<<"Anton"<<endl;
    }
    else if(total_a<total_d){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    // cout<<"a= "<<total_a<<endl;
    // cout<<"d= "<<total_d<<endl;
    return 0;
}