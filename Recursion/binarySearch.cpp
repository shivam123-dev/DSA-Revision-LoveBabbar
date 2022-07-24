#include <iostream>
using namespace std;
bool binarySearch(int arr[], int n, int key, int start = 0, int end = 0) {
    if (start > end)
        return false;
    end = n - 1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return true;
    if (arr[mid] > key)
        return binarySearch(arr, n, key, start, mid - 1);
    return binarySearch(arr, n, key, mid + 1, end);    
}
int main() {
    int n;
    cin >> n;
    int* arr = new int [n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key);
    return 0;
}