#include <iostream>
using namespace std;
// Iterative Approach
int countWays(int n) {
    if(n <= 2)
        return n;
    int prev1 = 1, prev2 = 2, curr;
    for(int i = 3; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
}
// Recursive Approach
int countDistinctWays(int n) {
    // base case
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    return countDistinctWays(n-1) + countDistinctWays(n-2);
}
// The above recursive approach will generate the TLE error, this is 
// because the compiler's call stack is not that much memory efficient
// and hence causes call stack overflow
int main() {
    int n;
    cin >> n;
    cout << countWays(n) << endl;
    return 0;
}