#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll,mark;
};

bool cmp(Student l,Student r){
    // cout<<"Hello"<<endl; // call fun
    // if(l.mark<r.mark){
    //     return true;
    // }
    // else if(l.mark>r.mark){
    //     return false;
    // }
    // else{
    //     if(l.roll<r.roll){
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }

    // 2
    if(l.mark==r.mark){
        return l.roll < r.roll;
    }
    else{
        return l.mark>r.mark;
    }

    // 3
    // return(l.mark==r.mark) ? l.roll < r.roll: l.mark > r.mark;
}
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].mark;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}

// 6
// rakib ahamed
// 21 55
// mohin khan
// 33 74
// fozia akter
// 9 93
// Ahamed Munse
// 2 99
// mohima khan
// 75 44
// farabi akter
// 01 99