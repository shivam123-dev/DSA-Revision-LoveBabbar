// Print the following pattern
// A
// B C
// C D E
// D E F G
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char ch[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};
    char temp;
    for(int i=0;i<n;i++) {
        temp = ch[i];
        for(int j=0;j<=i;j++) {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}