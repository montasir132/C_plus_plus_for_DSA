// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int target = n / 2;
            int total_e = abs(even - target);
            cout << total_e << endl;
        }
    }
    return 0;
}