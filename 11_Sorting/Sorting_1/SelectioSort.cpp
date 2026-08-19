#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int element : arr)
        cout << element << endl;
}
int main()
{
    vector<int> arr = {2, 1, 4, 3, 5};
    print(arr);
    cout << endl;
    int m = arr.size();
    int mn = arr[0], mnIdx = 0;

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
                mnIdx = i;
            }
        }
    }

    swap(arr[0], arr[mnIdx]);

    print(arr);
}