#include <iostream>
using namespace std;
int main()
{
    int a, r, n;
    cin >> a >> r >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << a << " " << endl;
        a *= r;
    }
}