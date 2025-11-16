#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x%2)
    {
        case 0:
            cout<< x <<" is a Even Number\n";
            break;
        case 1:
            cout<< x <<" is a Odd Number\n";
            break;
    }
    return 0;
}