#include<iostream>
using namespace std;
int search(int* arr, int n, int key) {
    int s = 0, e = n-1;
    while(s<=e) {
        // int mid = (s+e)/2; ->this can create an error if we have both start and end values as INT_MAX
        // so to avoid it we use the following formula:-
        int mid = s + (e-s)/2;
        if(arr[mid] == key) {
            cout << "Element is present. The index is:-";
            return mid;
        }
        else if(arr[mid] < key) 
            s = mid + 1;
        else if(arr[mid] > key)
            e = mid - 1;
    }
    cout << "Element is not present in the array" << endl;
    return -1;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << search(arr, n, key) << endl;
    return 0;
}