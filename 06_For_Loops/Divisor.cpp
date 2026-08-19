#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter number :" << endl;
    cin >> n;

    //       BRUTE FORCE APPROACH
    // for (int i = 0; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         arr.push_back(i);
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            // This stores the paired factor (n/i) corresponding to the divisor i.
            if (n / i != i)
            {
                arr.push_back(n / i);
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}