#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Prime number: ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (n / i != i)
            {
                cout << n / i << endl;
            }
        }
    }
}