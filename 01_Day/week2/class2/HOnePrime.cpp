#include <iostream>
using namespace std;
#define intt long long
int main()
{
    int x, p = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            p++;
        }
    }
    if (p == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
