#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 0, power = 0;
    while(n) {
        ans = ans + pow(2, power);
        power++;
        n/=10;
    }
    cout << ans << endl;
    return 0;
}