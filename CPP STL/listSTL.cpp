#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.push_front(8);
    cout << "The size of the array is: " << l.size() << endl;
    cout << "All the elements of the array are:-" << endl;
    while (!l.empty())
    {
        cout << l.front() << " ";
        l.pop_front();
    }
    return 0;
}