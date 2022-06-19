#include<iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if(ch >= 'a' and ch <= 'z') 
        cout << ch << " is a lowercase alphabet";
    else if(ch >= 'A' and ch <= 'Z')
        cout << ch << " is a uppercase alphabet";
    else if(ch >= '0' and ch <= '9')
        cout << ch << " is a digit";
    return 0;
}