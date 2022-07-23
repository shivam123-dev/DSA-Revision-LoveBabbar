#include <iostream>
using namespace std;
void reachHome(int src, int dest) {
    cout << src << " ";
    if(src == dest) {
        cout << endl <<"Reached Home" << endl;
        return;
    }
    reachHome(src + 1, dest);
}
int main() {
    int src, dest;
    cin >> src >> dest;
    reachHome(src, dest);
    return 0;
}