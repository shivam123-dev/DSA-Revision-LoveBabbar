#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    // Rotating the array cyclicly
    int n = nums.size();
    vector<int> num(n);
    for(int i=0;i<n;i++) {
        num[(i+k)%n] = nums[i];
    }
    for(int i=0;i<n;i++)
        cout << num[i] << " ";
    cout << endl;
    return 0;
}