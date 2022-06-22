#include<iostream>
using namespace std;
void fibo(int n) {
    if(n == 0 or n == 1)
        cout << n << endl;
    else {
        int n1 = 0, n2 = 1, n3;
        for(int i=2;i<n;i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << endl;
    }    
    return;
}
int main() {
    int n;
    cin >> n;
    fibo(n);
    return 0;
}