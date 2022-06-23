// Program to swap alternate elements of an array
// input:- arr[5] = {1, 2, 7, 8, 5};
// output:- {2, 1, 8, 7, 5};

#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange(vector<int> arr, int n) {
    if(n % 2 == 0) {
        for(int i=0;i<n;i+=2) {
            swap(arr[i], arr[i+1]);
        }
    }
    else {
        for(int i=0; i<n-1; i+=2) {
            swap(arr[i], arr[i+1]);
        }
    }
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    arr = rearrange(arr, n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}