// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/replace-word

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         string s, x;
//         cin >> s >> x;
//         int len_s = s.size();
//         int len_x = x.size();
//         for (int i = 0; i < len_s; i++)
//         {
//             int tmp = 1;
//             if (i + len_x <= len_s)
//             { // traversing
//                 for (int j = 0; j < len_x; j++)
//                 {
//                     if (s[i + j] != x[j])
//                     {
//                         tmp = 0;
//                         break;
//                     }
//                 }
//             }
//             else
//                 tmp = 0;
//             if (tmp)
//             {
//                 cout << "#";
//                 i += len_x - 1;
//             }
//             else
//             {
//                 cout << s[i];
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int x_len = x.length();
        while (true)
        {
            int idx = s.find(x);
            if (idx != -1)
            {
                s.replace(idx, x_len, "#");
            }
            else
                break;
        }
        cout << s << endl;
    }
    return 0;
}