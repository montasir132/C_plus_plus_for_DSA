// https://www.codechef.com/problems/ROOMALLOC
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
        int cont = 0;
        for (int i = 0; i < n; i++)
        {
            int room=ceil((float)a[i]/2);
            cont+=room;
        }
        cout << cont << endl;
    }
    return 0;
}

// cornar cass error;

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         int cont = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             // cout << a[i];
//             if (a[i] == 2 || a[i] == 1){
//                 cont = 1;
//                 cout << cont << endl;
//                 break;
//             }
//             else{
//                 cont = a[i] * 2;
//                 cout << cont << endl;
//                 break;
//             }
//         }
//         // cout << cont << endl;
//     }
//     return 0;
// }

