#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter a Number: ";
    vector<int> arr;
    cin >> n;
    count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        cout << i << " " << endl;
        while (n % i == 0)
        {
            // cout << i << " " << endl;
            n = n / i;
        }
    }
    if (n > 1)
    {
        cout << n;
    }
}