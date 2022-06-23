#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }
    unordered_map<int, int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++) {
        if((*it).second > 1) {
            cout << (*it).first << endl;
            return 0;
        } 
    }
    return 0;
}