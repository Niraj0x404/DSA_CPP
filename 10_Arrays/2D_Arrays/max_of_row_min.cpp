#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{99, 8, 1, 2}, {3, 4, 9906, 8}, {1, 2, 4, 3}};
    int maxrow = -1, max = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        int min1 = INT_MIN;
        for (int j = 0; j < 4; j++)
        {

            if (arr[i][j] > min1)
            {
                min1 = arr[i][j];
            }
        }
        if (min1 < max)
        {
            max = min1;
            maxrow = i;
        }
    }
    cout << maxrow << " " << max;
}