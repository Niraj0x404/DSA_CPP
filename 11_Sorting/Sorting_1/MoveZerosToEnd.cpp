#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {9,-2,0,0,4,55,666,777,0,5,0,6,0,7,0};
    print(arr);
    cout << endl;
    int m = arr.size();
    for (int j = 0; j < m - 1; j++)
    {
        int swaps = 0; // best for sorted arrays only 1 pass is required.
        for (int i = 0; i < m - j - 1; i++)
        {
            if (arr[i] ==0)
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