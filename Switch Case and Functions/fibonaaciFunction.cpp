#include<iostream>
using namespace std;
void fibo(int n) {
    if(n == 0)
        cout << 0 << " ";
    else if(n == 1) 
        cout << 0 << " " << 1 << " "; 
    else {
        int n1 = 0, n2 = 1, n3;
        cout << 0 << " " << 1 << " ";
        for(int i=2;i<=n;i++) {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }    
    return;
}
int main() {
    int n;
    cin >> n;
    fibo(n);
    return 0;
}