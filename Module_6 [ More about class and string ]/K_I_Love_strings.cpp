// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, res = "";
        cin >> s >> t;
        int n = max(s.size(), t.size());
        for (int i = 0; i < n; i++)
        {
            if (i < s.size())
            {
                res += s[i];
            }
            if (i < t.size())
            {
                res += t[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}