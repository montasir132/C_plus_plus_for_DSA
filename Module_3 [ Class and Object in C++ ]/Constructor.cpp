// Constructor  use korar age 

// #include<bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     int rol;
//     int cls;
//     double gpa;
// };
// int main()
// {
//     student Montasir;
//     Montasir.rol=40;
//     Montasir.cls=10;
//     Montasir.gpa=4.11;

//     student rafi;
//     rafi.cls=10;
//     rafi.rol=1;
//     rafi.gpa=5.00;

//     cout<<Montasir.cls<<" "<<Montasir.rol<<" "<<Montasir.gpa<<endl;
//     cout<<rafi.cls<<" "<<rafi.rol<<" "<<rafi.gpa<<endl;
//     return 0;
// }


// Constructor use

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int rol;
    int cls;
    double gpa;

    student(int c, int r, int g) // Constructor function a date type thakbe na ||
    // class dia function call korta hobe 
    {
        cls=c;
        rol=r;
        gpa=g;
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