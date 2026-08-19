#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> vt;
    v = {10, 20, 40, 48, 49, 100};
    vt = {30, 50, 60, 70, 78, 80, 89, 90, 990};
    int m = v.size();
    int n = vt.size();
    vector<int> vtt(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (v[i] < vt[j])
        {
            vtt[k] = v[i];
            i++;
            k++;
        }
        else
        {
            vtt[k] = vt[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        vtt[k] = v[i];
        i++;
        k++;
    }
    while (j < n)
    {
        vtt[k] = vt[j];
        j++;
        k++;
    }
    for (int element : vtt)
        cout << " " << element;
}
