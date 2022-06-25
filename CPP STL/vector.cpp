#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Vector STL being dynamic, is mostly preferred than the array STL
    vector<int> v = {1, 2, 3, 4, 5};
    // Operations performed over vector
    // Get the size of the vector
    cout << "The size of the vector is: " << v.size() << endl; 
    // Get the capacity of the vector
    cout << "The capacity of the vector is: " << v.capacity() << endl;
    // Print the complete vector
    cout << "The elements of the vector are: ";
    for(auto i:v)
        cout << i << " ";
    cout << endl;
    // Shrinking the vector size to correctly fit the elements
    // v.shrink_to_fit()
    // To check whether the vector is empty or not
    cout << "Vector is empty or not: " << v.empty() << endl;
    return 0;
}