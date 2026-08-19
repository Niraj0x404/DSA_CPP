#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{5, 8, 1, 2}, {3, 4, 6, 8}, {1, 2, 4, 3}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
                sum+=arr[i][j];
            }
            cout << endl;
    }
    
    cout << sum;
}