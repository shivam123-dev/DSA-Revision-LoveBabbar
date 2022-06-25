#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> q;
    q.push_back(1);
    q.push_front(2);
    cout << q.front() << " " << q.back() << endl;
    cout << q.empty() << endl;
    cout << q.at(1) << endl;
    cout << q.size() << endl;
    q.erase(q.begin(), q.begin() + 1);
    cout << q.size() << endl;
    return 0;
}