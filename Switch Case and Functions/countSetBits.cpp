#include<iostream>
using namespace std;
int count(int a) {
    int c = 0;
    while(a) {
        if(a & 1)
            c++;
        a = a >> 1;
    }
    return c;
}
int main() {
    int a, b;
    cin >> a >> b;
    int sum = count(a) + count(b);
    cout << sum << endl;
    return 0;
}