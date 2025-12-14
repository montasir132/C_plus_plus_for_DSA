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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maximam = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maximam)
            {
                maximam = a[i];
            }
        }
        cout << maximam << endl;
    }
    return 0;
}