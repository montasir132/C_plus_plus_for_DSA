#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int *p=new int; // heap mamory stor
    *p=200;
    cout<< *p << endl;
    return 0;
}


// stack variable
// Fun --> 10
// main --> garbes valu

// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun(){
//     int x=10; 
//     p=&x;
//     cout<<"Fun --> "<< *p << endl;
//     return;
// }
// int main(){
//     fun();
//     cout<<"main --> "<< *p << endl;
//     return 0;
// }


// Dynamic variable
// Fun --> 10
// main --> 10

// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun(){
//     int *x=new int; 
//     *x=10;
//     p=x;
//     cout<<"Fun --> "<< *p << endl;
//     return;
// }
// int main(){
//     fun();
//     cout<<"main --> "<< *p << endl;
//     return 0;
// }