#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[101]; // 101 byte
    int roll; // 4 byte
    double gpa; // 8 byte
};
int main()
{
    // Student a;
    // a.roll=31;
    // a.gpa=4.11;
    // char temp[101]="Montasir";
    // strcpy(a.name,temp);
    // cout<<a.name<<" "<<a.roll<<" "<<a.gpa;

    // Student a,b;
    // cin>>a.name>>a.roll>>a.gpa;
    // cin>>b.name>>b.roll>>b.gpa;
    // cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    // cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;

    Student a,b;
    cin.getline(a.name,101);
    cin>>a.roll>>a.gpa;
    cin.ignore(); // spes na count korr jono
    cin.getline(b.name,101);
    cin>>b.roll>>b.gpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    return 0;
}