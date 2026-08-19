#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    vector<vector<int>> v;
    // vector<vector<int>> v;
    for (int i = 0; i < m; i++)
    {
        v.push_back(vector<int>(i + 1, 1));
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            // cin >> v[i][j];
            if (j != 0 && j != i)
            {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}