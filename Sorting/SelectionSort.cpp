#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        int minEle = i;
        for (int j = i + 1; j < n; j++)
            if (arr[minEle] > arr[j])
                minEle = j;
        swap(arr[minEle], arr[i]);
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}