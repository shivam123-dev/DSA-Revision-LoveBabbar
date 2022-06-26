#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    map<int, int> mp;
    vector<int> v = {1, 2, 2,1, 1, 4, 13, 412,1 ,23};
    for(int i=0;i<v.size();i++) 
        mp[v[i]]++;
    map<int, int> :: iterator it;
    cout << "The elements of the map are: " << endl;
    for(it=mp.begin();it!=mp.end();it++)
        cout << (*it).first << "-->" << (*it).second << endl;
    cout << "Size of map is: " << mp.size() << endl;
    cout << "Maximum size of map is: " << mp.max_size() << endl;
    return 0;
}