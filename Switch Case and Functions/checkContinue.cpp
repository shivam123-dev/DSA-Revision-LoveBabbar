#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    switch(n) {
        case 1: cout << "Hello World" << endl; continue;
        default: cout << "!!" << endl; continue;
    }
    // In the above code, the continue statement is not valid
    // because continue is used always within a loop
    return 0;
}