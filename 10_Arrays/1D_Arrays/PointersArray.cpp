#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2, b = 3, c = 4, d = 5;
    int *arr[] = {&a, &b, &c, &d};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " "; // prints addresses
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *arr[i] << " "; // prints values
    }
}
