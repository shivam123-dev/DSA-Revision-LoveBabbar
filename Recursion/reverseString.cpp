#include<iostream>
using namespace std;
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
int main() {
    string s;
    cin >> s;
    cout << rev(s);
    return 0; 
}