#include <iostream>
using namespace std;
void merge(int *arr, int start, int end) {
    int mid = start + (end - start) / 2;
    int len1 = mid + 1 - start;
    int len2 = end - mid;
    int* first = new int [len1];
    int* second = new int[len2];
    int k = start;
    for(int i=0;i<len1;i++) {
        first[i] = arr[k++];
    }
    for(int i=0;i<len2;i++) {
        second[i] = arr[k++];
    }
    int idx1 = 0, idx2 = 0;
    k = start;
    while(idx1 < len1 and idx2 < len2) {
        if(first[idx1] < second[idx2])
            arr[k++] = first[idx1++];
        else
            arr[k++] = second[idx2++];
    }
    while(idx1 < len1)
        arr[k++] = first[idx1++];
    while(idx2 < len2)
        arr[k++] = second[idx2++];
    delete [] first;
    delete [] second;
}
void mergeSort (int *arr, int start, int end) {
    // base case
    if (start >= end)
        return;
    // recursive case
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, end);
}
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}