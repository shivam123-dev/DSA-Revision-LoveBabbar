#include<iostream>
using namespace std;
void fibo(int n) {
    if(n == 0 || n == 1) {
        cout << n << endl;
        return;
    }
    int n1 = 0, n2 = 1, n3;
    int sum = n1 + n2;
    cout << n1 << " " << n2 << " ";
    for(int i = 2; i < n; i++) {
        n3 = n1 + n2;
        sum += n3;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    cout << "\nThe sum of the fibonacci series upto " << n << " is " << sum << endl;
    return;
}
int main() {
    int n;
    cin >> n;
    fibo(n);
    return 0;
}