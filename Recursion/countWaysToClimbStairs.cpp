#include <iostream>
using namespace std;
int countWays(int n) {
    // base case
    if(n <= 2)
        return n;
    // recursive relation
    int prev1 = 1, prev2 = 2, curr;
    for(int i = 3; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
}
int main() {
    int n;
    cin >> n;
    cout << countWays(n) << endl;
    return 0;
}