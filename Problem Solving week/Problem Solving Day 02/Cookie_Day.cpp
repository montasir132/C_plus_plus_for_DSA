// https://www.codechef.com/problems/ADVITIYA3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int minimam = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                minimam = min(a[i] % k, minimam);
            }
        }
        if (minimam == INT_MAX)
            cout << -1 << endl;
        else
            cout << minimam << endl;
    }
}