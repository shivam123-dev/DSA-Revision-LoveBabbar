#include<iostream>
using namespace std;
// Approach 1
string ans = "";
string rev(string s, int i=0) {
    // base case
    if(i == s.length()) {
        ans += s[i];
        return ans;
    }
    // recursive case
    char a = s[i];
    rev(s, i+1);
    return ans += a;
}
// Approach 2
string reverse(string s, int i, int j) {
    // base case
    if(i>j)
        return s;
    // recursive case
    swap(s[i], s[j]);
    return reverse(s, i+1, j-1);
}
string reve(string s, int i) {
    if(i > s.length()-i-1) {
        return s;
    }
    swap(s[i], s[s.length()-i-1]);
    return reve(s, i+1);
}
int main() {
    string s;
    cin >> s;
    cout << rev(s) << endl;
    cout << reverse(s, 0, s.length()-1) << endl;
    cout << reve(s, 0) << endl;
    return 0; 
}