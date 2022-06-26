#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Max Heap -> It fetches the greatest elements first
    priority_queue<int> maxi;
    // Min Heap -> It fetches the smallest elements first
    priority_queue<int, vector<int>, greater<int> > mini;
    
    // Pushing elements in Max Heap
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    // Pushing elements in Min Heap
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(1);

    // Fetching the elements from the Max Heap
    int n1 = maxi.size();
    cout << "The elements of the max heap are:- "; 
    for(int i=0;i<n1;i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    // Fetching the elements from the Max Heap
    int n2 = mini.size();
    cout << "The elements of the min heap are:- "; 
    for(int i=0;i<n2;i++) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    return 0;
}