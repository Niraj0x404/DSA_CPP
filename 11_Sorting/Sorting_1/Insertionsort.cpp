#include <bits/stdc++.h>
using namespace std;
void ptr(vector<int> arr)
{
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {4, 1, 7, 3, 9, 2, 0, 8};
    ptr(arr);
    int n = arr.size();
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while ( j >0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    ptr(arr);
}