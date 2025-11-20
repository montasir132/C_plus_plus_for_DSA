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
Student* fun(){
    Student* Montasir= new Student(10, 41, 4.11);
    return Montasir;
}
int main()
{
    Student* Montasir= fun();
    cout<<Montasir->cls<<" "<<Montasir->rol<<" "<<Montasir->gpa<<endl;
    return 0;
}
// এখানে static অবজেক্ট এ আছে এটা এখন যদি আমরা প্রিন্ট করতে চাই 
// এখানে গারবেজ ভ্যালু চলে আসবে কারণ এটা ডাইনামিক করা নেই