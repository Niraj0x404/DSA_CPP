#include <iostream>
using namespace std;
int main()
{
    int a, d, ans, n, i;
    cout << "Write first number:" << endl;
    cin >> a;
    cout << "write common difference:" << endl;
    cin >> d;
    cout << "Enter n digit: " << endl;
    cin >> n;
    for (i = a; a >= 0; i--)
    {
        cout << a << endl;
        a = a + d;
    }
    cout << "Total Numbber printed" << i << endl;
    ans = a + (n - 1) * d;
    cout << ans << endl;
}