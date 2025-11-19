// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x=10;
//     cout <<"variable-->"<<x<<endl; // variable-->10
//     cout<<"address--> "<<&x<<endl; // address--> 0x61ff0c
//     cout<<"d-reference --> "<<*(&x)<<endl;// dreference --> 10
    
//     int*ptr=&x;
//     cout<<"ptr variable--> "<<ptr<<endl;
//     cout<<"ptr address--> "<<&ptr<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x=10;
//     int*ptr=&x;
//     *ptr=200; // x value change
//     // *ptr dhile x value ta ashbe
//     cout<<"x variable--> "<<*ptr<<endl;
//     // ptr dhile x er address
//     cout<<"ptr variable--> "<<ptr<<endl;
//     // &ptr dhile ptr er address
//     cout<<"ptr address--> "<<&ptr<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int* fun(){
//     int a =22;
//     int *p=&a;
//     *p=33;
//     return &a;
//     // return p;
// }
// int main(){
//     int *ptr=fun();
//     cout<<*(ptr)<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int fun(){

    // return;
}
int main(){
    int a[3];
    a[0]=10; // 4 bit 
    a[1]=20;
    a[2]=30;

    *(&a[0])=90;
    *(&a[2])=554;

    cout<<a<<endl;//a[0] address show
    
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
