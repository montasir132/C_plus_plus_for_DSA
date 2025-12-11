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
        int chocolate = n / 5;
        // cout<<chocolate<<endl;
        int wrapp = chocolate;
        while (wrapp >= 3)
        {
            int bons = wrapp / 3;
            int rem = wrapp % 3;
            chocolate += bons;
            wrapp = bons + rem;
        }
        cout << chocolate << endl;
    }
    return 0;
}