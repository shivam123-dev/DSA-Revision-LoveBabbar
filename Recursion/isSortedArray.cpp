#include <iostream>
using namespace std;
// my own approach
// bool isArraySorted(int arr[], int n, int i=0, int j=0) { 
//     j = i+1;
//     if((arr[i] > arr[j]) and (i < n) and (j < n))
//         return false;
//     if(i < n)
//         return isArraySorted(arr, n, i+1);
//     return true;
// }
// optimal approach
bool isArraySorted(int arr[], int n) {
    // base case
    if(n == 0)
        return true;
    if(arr[0] > arr[1])
        return false;
    bool ans = isArraySorted(arr+1, n-1);
    return ans;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << isArraySorted(arr, n) << endl;
    return 0;
}