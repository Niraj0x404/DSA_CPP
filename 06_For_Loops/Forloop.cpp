#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    cout << v.size() << " " << v.capacity() << endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    for (int element : v)
    { // : ---> in  'element' gets each value one by one
        cout << element << " ";
    }
}