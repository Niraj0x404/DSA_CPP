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
    for (int i = 0; i * i <= n; i++)
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