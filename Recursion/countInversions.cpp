#include<iostream>
using namespace std;
int countInversions(int *arr, int n) {
    // base case
    if(n == 0)
        return 0;
    // recursive case
    int count = 0;
    for(int i=1;i<n;i++)
        if(arr[0] > arr[i])
            count++;
    count += countInversions(arr+1, n-1);
    return count;
} 
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << countInversions(arr, n) << endl;
    return 0;
}