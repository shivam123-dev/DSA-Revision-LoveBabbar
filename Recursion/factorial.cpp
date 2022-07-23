#include<iostream>
using namespace std;
int factorial(int n) {
    // base case
    if(n == 0)
        return 1;
    // recursive relation
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}