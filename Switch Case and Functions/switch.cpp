#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(true) {
        switch(n) {
            case 1: cout << "Hello" << endl; break;
            default: cout << "World" << endl; break;
        }
        // Here, the exit() is terminating the infinite loop.
        exit(0);
    }
    cout << "Hello World" << endl;
    return 0;
}