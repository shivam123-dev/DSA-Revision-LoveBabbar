#include <iostream>
using namespace std;
string ans = "";
string sayDigits(string n, int i) {
    // base case
    if(i == n.size()) {
        return ans;
    }
    switch(n[i]) {
        case '1' : ans += "One "; break;
        case '2' : ans += "Two "; break;
        case '3' : ans += "Three "; break;
        case '4' : ans += "Four "; break;
        case '5' : ans += "Five "; break;
        case '6' : ans += "Six "; break;
        case '7' : ans += "Seven "; break;
        case '8' : ans += "Eight "; break;
        case '9' : ans += "Nine "; break;
        case '0' : ans += "Zero "; break;
    }
    return sayDigits(n, i+1);
}
int main() {
    string n;
    cin >> n;
    string ans = sayDigits(n, 0);
    cout << ans << endl;
    return 0;
}