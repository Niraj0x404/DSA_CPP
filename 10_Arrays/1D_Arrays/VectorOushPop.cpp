#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(7); // default value is 0
    cout << v.size() << " " << v.capacity() << endl; // 7 7
    v.push_back(4);
    cout << v.size() << " " << v.capacity() << endl; // 8 14
}
// If size becomes equal to capacity, push_back() allocates new memory, usually doubling the capacity.