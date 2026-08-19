#include <iostream>
using namespace std;
int main()
{
    int a, d, n, t, sum;
    cout << "Enter first Number: " << endl;
    cin >> a;
    cout << "Enter common difference: " << endl;
    cin >> d;
    cout << "Enter Number upto where you want to AP: " << endl;
    cin >> n;
    t = a + (n - 1) * d;
    sum = (n / 2)*(2*a + (n - 1 * d));
    for (int i = 1; i <= n; i++)
    {
        cout << a << " " << endl;
        a = a + d;
    }
    cout << "Last term: " << t << endl;
    cout << "Sum of " << n << "terms :" << sum << endl;
}