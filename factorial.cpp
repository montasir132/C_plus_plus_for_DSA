#include <bits/stdc++.h>
using namespace std;
int mul;
int factorial(int n)
{
    if (n == 1)
        return 1;
    mul = factorial(n - 1);
    return n * mul;
}
int main()
{
    int n;
    cin >> n;
    mul = factorial(n);
    cout << mul << endl;
    return 0;
}