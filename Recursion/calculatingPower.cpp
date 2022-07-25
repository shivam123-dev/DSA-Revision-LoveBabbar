#include <iostream>
using namespace std;
int calcPower(int base, int power) {
    // base case
    if (power == 0)
        return 1;
    if(power == 1)
        return base;
    // recursive case
    int ans = calcPower(base, power/2);
    if(power % 2 == 0)
        return ans*ans;
    return ans*ans*base;
}
int main() {
    int base, power;
    cin >> base >> power;
    cout << calcPower(base, power) << endl;
    return 0;
}