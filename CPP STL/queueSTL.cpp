#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "The size of queue is: " << q.size() << endl;
    cout << "The last element of the queue is " << q.back() << endl;
    cout << "The first element of the queue is " << q.front() << endl;
    cout << "Is queue empty? " << q.empty() << endl;
    cout << "All the elements of the queue are:-";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}