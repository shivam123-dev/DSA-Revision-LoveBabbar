#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sum(vector<int> a, int n, vector<int> b, int m) {
    int num1 = 0, num2 = 0;
    for(int i=0;i<n;i++) 
        num1 = (num1 * 10) + a[i];
    for(int i=0;i<m;i++) 
        num2 = (num2 * 10) + b[i];
    int num = num1 + num2;
    a.clear();
    while(num) {
        a.push_back(num%10);
        num /= 10;
    }
    reverse(a.begin(), a.end());
    return a;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++)
        cin >> arr1[i];
    for(int i=0;i<m;i++)
        cin >> arr2[i];
    vector<int> arr = sum(arr1, n, arr2, m);
    for(int i=0;i<arr.size();i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}