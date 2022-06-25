#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    cout << "The size of set is: " << s.size() << endl;
    cout << "Is set empty? " << s.empty() << endl;
    cout << "All the elements of the set:- ";
    set<int> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout << (*it) << " ";
    cout << endl;
    return 0;
}