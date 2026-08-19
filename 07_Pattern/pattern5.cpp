#include <iostream>
using namespace std;
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) // n - row + 1
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print3(n);
}
