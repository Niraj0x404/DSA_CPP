#include <bits/stdc++.h>
using namespace std;
void change(vector<int> v) //pass by value
{
    v[2] = 45;
}
void change1(vector<int>& v) // pass by reference
{
    v[2] = 45;
}
int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    change(v);
    cout << v[2] << " ";
}

// pass by value == copy of whole vector is sent.