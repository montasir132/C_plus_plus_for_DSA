#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] - 'A' + 'a';
        }
    }
    reverse(a.begin(), a.end());
    cout << a << endl;
    return 0;
}