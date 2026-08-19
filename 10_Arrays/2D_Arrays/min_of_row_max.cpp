#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{99, 8, 1, 2}, {3, 4, 9906, 8}, {1, 2, 4, 3}};
    int maxrow = -1, max = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        int max1 = 0;
        for (int j = 0; j < 4; j++)
        {

            if (arr[i][j] > max1)
            {
                max1 = arr[i][j];
            }
        }
        if (max1 > max)
        {
            max = max1;
            maxrow = i;
        }
    }
    cout << maxrow << " " << max;
}