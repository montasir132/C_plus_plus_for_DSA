// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/find-jessica
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin.ignore();
    getline(cin,s);
    // cout<<s;
    stringstream ss(s);
    string word;
    int count=0;
    while (ss>>word)
    {
        if(word=="Jessica")count++;
    }
    if(count!=0)cout<<"YES";
    else cout<<"NO";
    return 0;
}