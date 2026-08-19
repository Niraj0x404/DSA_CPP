#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{5, 8, 1, 2}, {3, 4, 6, 8}, {1, 2, 4, 3}};
    
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 3; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}