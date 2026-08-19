#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{5, 8, 1, 2}, {3, 4, 6, 8}, {1, 2, 4, 3},{2,3,4,6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}