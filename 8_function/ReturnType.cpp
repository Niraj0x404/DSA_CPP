#include <iostream>
using namespace std;
int product(int a, int b)
{
    return a * b;
}
int main()
{
    int m, n;
    cin >> n >> m;
    int x = product(m, n);
    cout << x << endl;
    // cout << product(m, n) << endl;
}