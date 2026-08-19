#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    cout << v.size() << " " << v.capacity() << endl;
    cout << endl;
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    // Multiply even number by 2, square the odd number
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            v[i] *= 2;
        }
        else
            v[i] *= v[i];
    }
    for (int element : v)
    {
        cout << element << " ";
    }
}