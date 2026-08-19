#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Prime number: ";
    cin >> n;
    int count = 0;
    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //         count++;
    //     }
    // }

    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //         count++;
    //         break;
    //     }
    // }
    // if (n == 1)
    // {
    //     cout << "Neither Prime Or Composite" << endl;
    // }
    // else if (count == 2)
    // {
    //     cout << "prime number" << endl;
    // }
    // else
    // {
    //     cout << "Composite Number" << endl;
    // }

    bool flag = false;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            flag = true;
            // cout << "Composite Number: " << endl;
            break;
        }
    }
    if (n == 1)
    {
        cout << "Neither Prime Or Composite" << endl;
    }
    else if (flag == true)
        cout << "Composite Number: " << endl;
    else
    {
        cout << "Prime Number" << endl;
    }
}