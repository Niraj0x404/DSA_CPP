#include <iostream>
using namespace std;
void print11(int n)
{
    // int start = 64;
    for (int i = 1; i <= n; i++)
    {

        // for (int j = 1; j <= i; j++)
        // {
        //     cout << (char)(start + j);
        // }
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print11(n);
}
