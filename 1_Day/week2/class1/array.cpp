#include <iostream>
using namespace std;
#define intt long long
int main()
{
    // 0 based indexing-- 0 to n-1;
    // 1 based indexing-- 0 to n;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // creating 10 different variable .
    cout << a[0] << " " << a[5] << endl;
    a[0] = 9;
    a[5] = 12;
    cout << a[0] << " " << a[5] << endl;
    // Taking input
    int z, i;
    cin >> z;
    for (i = 0; i < z; i++)
    {
        cout << i << endl;
    }
    cout << "Auto for loop" << endl;
    // go through the values
    // for each loop
    //      auto → The compiler automatically determines the type (int here).
    //      i → Stores each element of the array one by one.
    //      a → The array being traversed.
    for (auto i : a)
    {
        cout << i << " ";
    }

    // take input using auto
    int k;
    cin >> k;
    double f[k];
    for (auto &i : f)
        cin >> i;
}