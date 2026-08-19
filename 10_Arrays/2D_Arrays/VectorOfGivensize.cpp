#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Rows:" << endl;
    cin >> m;
    cout << "Enter Col:" << endl;
    cin >> n;
    // vector<int> v(m,0);
    vector<vector<int>> v(m, vector<int>(n, 0));
    // v.push_back(vector<int> v1(2,-1)); // You cannot declare a variable (v1) inside vector<int> like that
    v.push_back(vector<int>(9,-3));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}