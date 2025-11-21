// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-08/challenges/who-is-it-4/problem
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int max_mark = -100;
        Student toppar;
        // int n;
        // cin >> n;
        for (int i = 0; i < 3; i++)
        {
            Student tem_stu;
            cin >> tem_stu.id >> tem_stu.name >> tem_stu.section >> tem_stu.total_marks;
            // cout<<tem_stu.id<<" "<<tem_stu.name<<" "<<tem_stu.section<<" "<<tem_stu.total_marks<<endl;
            if (max_mark < tem_stu.total_marks)
            {

                toppar = tem_stu;
                max_mark = tem_stu.total_marks;
            }
            else if (max_mark == tem_stu.total_marks)
            {
                if (toppar.id > tem_stu.id)
                {
                    toppar = tem_stu;
                }
            }
        }
        cout <<toppar.id<<" "<<toppar.name<<" "<<toppar.section<<" "<<toppar.total_marks<<endl;
    }
    return 0;
}