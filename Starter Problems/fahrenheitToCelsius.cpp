#include<iostream>
using namespace std;
int main() {
    float fahrenheit, celsius;
    cin >> fahrenheit;
    cout << "Fahrenheit --> Celsius" << endl;
    for(float i=1;i<=fahrenheit;i++) {
        celsius = (i - 32) / 1.8;
        cout << i << "-->" << celsius << endl;
    }
    return 0;
}