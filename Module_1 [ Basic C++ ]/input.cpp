// #include<iostream>
// int main(){
//     int v;
//     // input
//     std::cin>>v;
//     // output
//     std::cout<<v<<std::endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int v,x;
    // input
    cin>>v>>x;
    int sum=v+x;
    // output
    // cout<<v<<endl<<x;
    cout<<sum<<endl;
    char a='A';
    int ascii=a;
    cout<<a<<" "<<"ascii valu = "<<ascii<<endl;
    // Typecasting
    cout<<"Typecasting ar madoma"<<a<<" "<<"ascii valu = "<<(int)a<<endl;
    return 0;
}