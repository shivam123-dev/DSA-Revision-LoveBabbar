#include <iostream>
using namespace std;
void printCountingDec(int n) {
    // base case
    if(n == 0) {
        return;
    }
    cout << n << " ";
    // recursive case
    printCountingDec(n - 1);
    return;
}
int main() {
    int n;
    cin >> n;
    printCounting(n);
    return 0;
}