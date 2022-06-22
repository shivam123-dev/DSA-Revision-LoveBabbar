#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int key;
    cin >> key;
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            cout << "key is found" << endl; 
            return 0;
        }
    }
    cout << "key is not found";
    return 0;
}