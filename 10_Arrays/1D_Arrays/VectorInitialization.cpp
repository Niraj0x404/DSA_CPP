#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(7);
    cout << v.size() << " " << v.capacity() << endl;
}

// Vector Notes

// vector<int> v(5);
// size = 5, capacity = 5

// vector<int> v = {2, 3, 4, 5, 6};
// size = 5, capacity = 5

// vector<int> v;
// size = 0, capacity = 0

// size()     -> number of elements present in the vector
// capacity() -> total memory allocated to the vector

// When size becomes equal to capacity,
// push_back() increases the capacity.