#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    // Insertion Sort
    for(int i=1;i<n;i++) {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
           j--; 
        }
        arr[j+1] = temp;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}