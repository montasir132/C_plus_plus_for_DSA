// ---- Max -----

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int roll,mark;
// };
// int main()
// {
//     int n;
//     cin>>n;
//     Student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin.ignore();
//         getline(cin,a[i].name);
//         cin>>a[i].roll>>a[i].mark;
//     }
//     Student m_max;
//     m_max.mark=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i].mark > m_max.mark){
//             m_max=a[i];
//         }
//     }
//     cout<<m_max.name<<" "<<m_max.roll<<" "<<m_max.mark;
//     return 0;
// }

// ---- Min -----

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int roll,mark;
// };
// int main()
// {
//     int n;
//     cin>>n;
//     Student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin.ignore();
//         getline(cin,a[i].name);
//         cin>>a[i].roll>>a[i].mark;
//     }
//     Student m_min;
//     m_min.mark = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i].mark < m_min.mark){
//             m_min=a[i];
//         }
//     }
//     cout<<m_min.name<<" "<<m_min.roll<<" "<<m_min.mark; 
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll,mark;
};
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
    Student m_min;
    Student m_max;
    m_max.mark=INT_MIN;
    m_min.mark=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].mark>m_max.mark){
            m_max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i].mark<m_min.mark){
            m_min=a[i];
        }
    }
    cout<<"MIN = "<<m_min.name<<" "<<m_min.roll<<" "<<m_min.mark<<endl;
    cout<<"MAX = "<<m_max.name<<" "<<m_max.roll<<" "<<m_max.mark<<endl;
    return 0;
}

// input 
// 6
// rakib ahamed
// 21 55
// mohin khan
// 33 74
// fozia akter
// 01 93
// Ahamed Munse
// 2 98
// mohima khan
// 75 44
// farabi akter
// 01 99