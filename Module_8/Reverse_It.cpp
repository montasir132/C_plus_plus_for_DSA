// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/reverse-it-8-2/problem
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
	string s;
    int id;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
    }
    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string tmp_s=a[i].s;
            a[i].s=a[j].s;
            a[j].s=tmp_s;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<endl;
    }
    return 0;
}