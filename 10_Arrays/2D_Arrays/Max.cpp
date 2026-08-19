#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{99, 8, 1, 2}, {3, 4, 6, 8}, {1, 2, 4, 3}};
    int max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << max;
}