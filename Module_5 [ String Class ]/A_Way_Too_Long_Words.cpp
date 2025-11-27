// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s.size() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << *s.begin() << s.size()-2 << *(s.end() - 1) << endl;
        }
    }
    return 0;
}