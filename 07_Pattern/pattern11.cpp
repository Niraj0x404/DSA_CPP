#include <iostream>
using namespace std;
void print11(int n)
{
    int space = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}
int main()
{
    int n;
    cin >> n;
    print11(n);
}

// i=4
// j=8
// 1--[1,6s,1]
// 2--[1,2,4s,2,1]
// 3--[1,2,3,2s,3,2,1]
// 4--[1,2,3,4,0s,4,3,2,1]