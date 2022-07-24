#include <iostream>
using namespace std;
// My first solution
// int sum(int arr[], int n) {
//     if(n == 0) {
//         return 0;
//     }
//     return arr[0] + sum(arr+1, n-1);
// }
// My second solution
int sum(int arr[], int n) {
    // base case
    if(n == 0)
        return 0;
    if(n == 1)
        return arr[0];
    // recursive case
    int ans = sum(arr+1, n-1);
    return arr[0] + ans;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << sum(arr, n) << endl;
    return 0;
}