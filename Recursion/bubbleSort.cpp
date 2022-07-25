#include<iostream>
using namespace std;
// Approach 1
int* bubbleSort(int arr[], int n, int i=0) {
    // base case
    if(i == n)
        return arr;
    // recursive case
    for(int j=i+1;j<n;j++)
        if(arr[i] > arr[j])
            swap(arr[i], arr[j]);
    return bubbleSort(arr, n, i+1);
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    // arr = bubbleSort(arr, n);
    arr = bubbleSort(arr, n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}