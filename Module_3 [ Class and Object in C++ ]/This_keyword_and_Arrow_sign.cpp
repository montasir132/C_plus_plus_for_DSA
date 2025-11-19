#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int rol;
    int cls;
    double gpa;

    student(int cls, int rol, int gpa)
    {
        // this->cls=cls;
        (*this).cls=cls;
        this->rol=rol;
        this->gpa=gpa;
    }
};
int main()
{
    student Montasir(10, 41, 4.11);
    student rafi(10, 1, 5.00);

    cout<<Montasir.cls<<" "<<Montasir.rol<<" "<<Montasir.gpa<<endl;
    cout<<rafi.cls<<" "<<rafi.rol<<" "<<rafi.gpa<<endl;
    return 0;
}