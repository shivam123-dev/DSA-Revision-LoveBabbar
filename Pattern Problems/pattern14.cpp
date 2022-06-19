// Print the following pattern
// A
// B B
// C C C
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char ch = 'A';
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
    return 0;
}