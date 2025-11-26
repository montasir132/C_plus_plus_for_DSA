#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<"access the ith index of the string. "<<s[3]<<endl; // use dise 
    cout<<"access the ith index of the string. "<<s.at(1)<<endl;

    cout<<"access the last element of the string. "<<s[s.size()-1]<<endl;
    cout<<"access the last element of the string. "<<s.back()<<endl; // use dise 

    cout<<"access the first element of the string. "<<s[0]<<endl; // use dise 
    cout<<"access the first element of the string. "<<s.front()<<endl;

    return 0;
}