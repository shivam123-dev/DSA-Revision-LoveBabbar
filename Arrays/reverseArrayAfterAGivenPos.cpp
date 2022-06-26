#include <iostream>
using namespace std;
void reverseArray(int n, int m, int *arr)
{
    int i = 0;
    while (i <= m)
    {
        i++;
    }
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(n, m, arr);
    return 0;
}