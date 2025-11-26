#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x="hello World!";
    // x.clear(); // nul kore da
    // cin>>x; // hello
    cout<<"returns the size of the string."<<endl<<x.size()<<endl;
    cout<<"returns the maximum size that string can hold."<<endl<<x.max_size()<<endl;
    cout<<"returns current available capacity of the string."<<endl<<x.capacity()<<endl;

    cout<<"return true/false if the string is empty."<<endl;
    if(x.empty()==true){
        cout<<"empty"<<endl;
    }else{
        cout<<"Not empty"<<endl;
    }
    x.resize(8);
    cout<<"change the size of the string."<<endl<<x<<endl;

    return 0;
}