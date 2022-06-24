#include<iostream>
using namespace std;
int count(int* arr, int start, int end) {
    int c = 0;
    for(int i=start; i <= end; i++) 
        c++;
    return c;
}
int find(int* arr, int n, int target) {
    int start = 0, end = n-1;
    int c = 0;
    // first occurrence 
    int first = 0, last = 0;
    while(start<=end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            first = mid;
            end = mid-1;
        }
        else if(arr[mid] < target) 
            start = mid + 1;
        else if(arr[mid] > target) 
            end = mid - 1;
    }
    start = 0, end = n-1;
    // last occurrence
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target) 
            start = mid + 1;
        else if(arr[mid] > target)
            end = mid - 1;
    }
    // return count(arr, first, last);
    // An alternative to the above method
    return (last - first) + 1; 
}
int main() {
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    int n = sizeof(arr)/sizeof(int);
    cout << "The total number of occurrences of 3 is: " << find(arr, n, 3) << endl;
    return 0;
}