#include<iostream>
using namespace std;
void reverse(int n) {
    int res = 0;
    while(n) {
        res = res*10 + n % 10;
        n /= 10;
    }
    cout << res << endl;
}
void decToBinary(int n) {
    if(n == 1) {
        cout << "0" << "1" << endl;
        return;
    }
    if(n == 2) {
        cout << "1" << "0" << endl;
        return;
    }
    int ans = 0;
    while(n) {
        ans = ans*10 + n%2;
        n /= 2;
    }
    reverse(ans);
}
int main() {
    int n;
    cin >> n;
    decToBinary(n);
    return 0;
}