#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll, math,english;
    Student(string name,int roll,int math,int english){
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }
    void Total(){
        cout<<"Total marks of "<<name<<" = "<<math+english<<endl;
    }
};

int main()
{
    Student Rakib("Rakib Ahamad",24,75,25);
    Rakib.Total();
    Student Sakib("Sakib Rahaman",42,87,100);
    Sakib.Total();
    return 0;
}