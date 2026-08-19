#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int element : arr)
        cout << element << endl;
}
int main()
{
    vector<int> arr = {2, 3, 4, 22, 33, 311, 29, 0, -9, -8, -7, -6, -99999, 99999};
    print(arr);
    cout << endl;
    int m = arr.size();
    for (int j = 0; j < m - 1; j++)
    {
        int swaps = 0; // best for sorted arrays only 1 pass is required.
        for (int i = 0; i < m - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swaps++;
            }
        }
        if (swaps == 0)
            break;
    }
    print(arr);
}