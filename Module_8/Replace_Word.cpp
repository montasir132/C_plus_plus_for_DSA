#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,x;
    cin >> str>>x;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == x[i])
        {
            cout << "#";
            i += 4;
        }
        else
        {
            cout << str[i];
            // i++;
        }
    }
    return 0;
}