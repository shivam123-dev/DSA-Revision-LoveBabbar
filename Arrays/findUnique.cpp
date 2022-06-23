#include<iostream>
#include<unordered_map>
using namespace std;
int findUnique(int* arr, int n) {
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    unordered_map<int, int> :: iterator it;
    for(it = mp.begin();it!=mp.end();it++) {
        if((*it).second == 1) {
            return (*it).first;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++) 
        cin >> a[i];
    cout << findUnique(a, n) << endl;
    return 0;
}