#include <iostream>
#include <vector>
using namespace std;
long long int binarySearch(int n) {
    long long int start = 0, end = n, ans;
    while(start <= end) {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if(square < n) {
            ans = mid;
            start = mid + 1; 
        }
        else
            end = mid - 1;
    }
    return ans;
}
int sqrt(int n) {
    return binarySearch(n);
}
double precision(int n, int prec, int integer) {
    double factor = 1;
    double ans = integer;
    while(prec--) {
        factor = factor / 10;
        for(double j=ans;j*j<n;j+=factor) {
            ans = j;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int integerPart = sqrt(n);
    int prec;
    cin >> prec;
    cout << "Answer with precision is:- " << precision(n, prec, integerPart) << endl;
    return 0;
}