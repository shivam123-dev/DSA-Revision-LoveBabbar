// Program to convert the negative number to binary number
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    n = ~n;
    n = n+1;
    int ans = 0, i = 0;
    while(n) {
        int bit = n&1;
        ans = (bit*pow(10, i++)) + ans;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}