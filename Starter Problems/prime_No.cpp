// Check whether a given number is prime or not
#include<iostream>
using namespace std;
bool isPrime(int n) {
    for(int i=2;i<n;i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int no;
    cin >> no;
    if(isPrime(no))
        cout << no << " is a prime number" << endl;
    else
        cout << no << " is not a prime number" << endl;
    return 0;
}