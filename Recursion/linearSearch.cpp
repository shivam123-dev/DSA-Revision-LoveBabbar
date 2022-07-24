#include <iostream>
using namespace std;
bool linearSearch (int arr[], int n, int search) {
    if(n == 0)
        return false;
    if(arr[0] == search)
        return true;
    bool ans = linearSearch(arr+1, n-1, search);
    return ans;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int search;
    cin >> search;
    cout << linearSearch(arr, n, search);
    return 0;
}