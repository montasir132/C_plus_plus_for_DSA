#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rol;
    int cls;
    double gpa;

    Student(int cls, int rol, int gpa)
    {
        this->cls=cls;
        this->rol=rol;
        this->gpa=gpa;
    }
};
Student fun(){
    Student Monta(10, 41, 4.11);
    return Monta;
}
int main()
{
    Student Montasir= fun();
    cout<<Montasir.cls<<" "<<Montasir.rol<<" "<<Montasir.gpa<<endl;
    return 0;
}