#include <iostream>
#include <array>
using namespace std;
int main() {
    // This type of Array is static in nature
    array<int, 5>a = {1, 2, 3, 4, 5};

    // Operations that are used:-
    // Getting size of the array
    cout << "The size of the array is: ";
    cout << a.size() << endl;
    // Get an element
    cout << "The element at 3rd index is: ";
    cout << a.at(3) << endl;
    // Printing of the array
    cout << "The array elements are: ";
    for(int i=0;i<a.size();i++)
        cout << a.at(i) << " ";
    cout << endl;
    // Get the first element
    cout << "The first element is ";
    cout << a.front() << endl;
    // Get the last element
    cout << "The last element is ";
    cout << a.back() << endl;
    return 0;
}