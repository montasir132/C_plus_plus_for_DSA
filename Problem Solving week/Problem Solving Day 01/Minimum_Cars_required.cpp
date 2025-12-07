// https://www.codechef.com/problems/MINCARS
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
        float div = (float)n / 4; //type cast
        //  cout<<div<<endl;
        cout << ceil(div) << endl;
    }
    return 0;
}