#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "The topmost element is: " << st.top() << endl;
    cout << "The size of the stack is: " << st.size() << endl;
    cout << "All the elements of the stack:-" << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}