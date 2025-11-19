// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n,val, max=INT_MIN;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &val);
//         if(val>max){
//             max=val;
//         }
//     }
//     cout<<max;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];   // array declare
    // input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mx = arr[0];   // প্রথম এলিমেন্টকে ধরে নিলাম maximum
    // পুরো array স্ক্যান
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    cout << mx;
    return 0;
}