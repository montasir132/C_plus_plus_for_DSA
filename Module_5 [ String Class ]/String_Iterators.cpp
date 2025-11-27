#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="hello world!";
    // cout<<*a.begin()<<endl;
    // cout<<*(a.end()-1)<<endl;

    // No iterator
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    // }
    // iterator
    // for(string::iterator it=a.begin();it<a.end();it++){
    //     cout<<*it<<endl;
    // }

    // compilor 11++
    for(auto it=a.begin();it<a.end();it++)
    {
        cout<<*it<<endl;
    }


    return 0;
}