#include <iostream>
using namespace std;
int powerOf(int n, int k) {
    // base case
    if(k == 0)
        return 1;
    // recursive relation
    int smallerProblem = powerOf(n, k-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << powerOf(n, k) << endl;
    return 0;
}