#include <iostream>
using namespace std;
void printCountingInc(int n) {
    // base case
    if(n == 0)
        return;
    // recursive case
    printCountingInc(n - 1);
    cout << n << " ";
    return;
}
int main() {
    int n;
    cin >> n;
    printCountingInc(n);
    return 0;
}