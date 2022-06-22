#include<iostream>
using namespace std;
void reverse(int* arr, int n) {
    int i=0, j=n-1;
    while(i<j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    reverse(arr, n);
    
    return 0;
}