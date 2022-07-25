#include <iostream>
using namespace std;
bool checkPalindrome(string s, int i = 0)
{
    // base case
    if (i > s.length() - i - 1)
        return true;
    // recursive case
    if (s[i] == s[s.length() - i - 1])
        return checkPalindrome(s, i + 1);
    return false;
}
int main()
{
    string s;
    cin >> s;
    cout << checkPalindrome(s) << endl;
    return 0;
}