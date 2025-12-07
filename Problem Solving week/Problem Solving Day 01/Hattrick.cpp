// https://www.codechef.com/problems/HATTRICK?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        char a[6];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        bool con=false;
        for(int i=0;i<6;i++)
        {
            if(a[i]=='W' && a[i+1]=='W' && a[i+2]=='W')
            {
                con=true;
            }
        }
        if(con==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         char a[6];
//         for(int i=0;i<6;i++){
//             cin>>a[i];
//         }
//         int con=0;
//         for(int i=0;i<6;i++)
//         {
//             if(a[i]=='W' && a[i+1]=='W' && a[i+2]=='W'){
//                 con=1;
//             }
//         }
        
//         if(con==0){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//     }
    
// }



