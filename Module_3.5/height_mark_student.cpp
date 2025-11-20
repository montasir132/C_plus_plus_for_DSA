#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
	char name[101];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char name[], int roll,char section,int math_marks,int cls){
        strcpy(this->name,name);
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;
    }
};

int main()
{
    Student s1("Montasir",15,'c',91,10);
    Student s2("Rafi",51,'c',91,10);
    Student s3("Maisha",17,'c',91,10);
    Student s4("Hamidul",16,'c',91,10);
    // cout<<s1.name<<" "<<s1.roll<<" "<<s1.section<<" "<<s1.math_marks<<" "<<s1.cls<<endl;
    // cout<<s1.math_marks<<" "<<s2.math_marks<<" "<<s3.math_marks<<" ";

    if(s1.math_marks>s2.math_marks && s1.math_marks>s3.math_marks && s1.math_marks>s4.math_marks){
        cout<<s1.name<<endl;
    }else if(s1.math_marks==s2.math_marks || s1.math_marks==s3.math_marks || s1.math_marks==s4.math_marks){
        if(s1.roll<s2.roll && s1.roll<s3.roll && s1.roll<s4.roll){
            cout<<s1.name<<endl;
        }
    }

    if(s2.math_marks>s1.math_marks && s2.math_marks>s3.math_marks && s2.math_marks>s4.math_marks){
        cout<<s2.name<<endl;
    }else if(s2.math_marks==s1.math_marks || s2.math_marks==s3.math_marks || s2.math_marks==s4.math_marks){
        if(s2.roll<s1.roll && s2.roll<s3.roll && s2.roll<s4.roll){
            cout<<s2.name<<endl;
        }
    }

    if(s3.math_marks>s1.math_marks && s3.math_marks>s2.math_marks && s3.math_marks>s4.math_marks){
        cout<<s3.name<<endl;
    }else if(s3.math_marks==s1.math_marks || s3.math_marks==s2.math_marks || s3.math_marks==s4.math_marks){
        if(s3.roll<s1.roll && s3.roll<s2.roll && s3.roll<s4.roll){
            cout<<s3.name<<endl;
        }
    }

    if(s4.math_marks>s1.math_marks && s4.math_marks>s2.math_marks && s4.math_marks>s3.math_marks){
        cout<<s4.name<<endl;
    }else if(s4.math_marks==s1.math_marks || s4.math_marks==s2.math_marks || s4.math_marks==s3.math_marks){
        if(s4.roll<s1.roll && s4.roll<s2.roll && s4.roll<s3.roll){
            cout<<s4.name<<endl;
        }
    }
    return 0;
}