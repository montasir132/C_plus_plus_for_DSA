#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    switch(c)
    {
        case 'a':
            cout<< c <<" is a Vowel\n";
            break;
        case 'e':
            cout<< c <<" is a Vowel\n";
            break;
        case 'i':
            cout<< c <<" is a Vowel\n";
            break;
        case 'o':
            cout<< c <<" is a Vowel\n";
            break;
        case 'u':
            cout<< c <<" is a Vowel\n";
            break;
        default: 
            cout<< c <<" is a Consonant\n";
    }
    return 0;
}