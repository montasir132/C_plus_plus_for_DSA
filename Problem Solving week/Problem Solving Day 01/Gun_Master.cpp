// https://www.codechef.com/problems/GMGM
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n], cnt = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > d && !flag)
            {
                cnt++;
                flag = 1;
            }
            if (a[i] <= d && flag)
            {
                cnt++;
                flag = 0;
            }
        }
        cout << cnt << endl;
    }
}
