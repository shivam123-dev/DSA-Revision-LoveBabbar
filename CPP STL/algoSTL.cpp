#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {5, 3, 1, 2, 4};
    cout << "Orginial Vector:- ";
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    // rotate the array
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Rotated Vector:- ";
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    // sort the array
    sort(v.begin(), v.end());
    cout << "Sorted Vector:- ";
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    // binary search
    cout << "Finding the element 3:- " << binary_search(v.begin(), v.end(), 3);
    cout << endl;
    // lower bound 
    cout << lower_bound(v.begin(), v.end(), 3)-v.begin();
    cout << endl;
    // upper bound
    cout << "Upper Bound of 4:- " << upper_bound(v.begin(), v.end(), 4)-v.begin();
    cout << endl;
    return 0; 
}