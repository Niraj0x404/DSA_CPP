#include <iostream>
#include <iomanip>
using namespace std;
#define intt long long
int main()
{
    // overflow condition
    intt a, b, c, d, e;
    cin >> a >> b >> c >> d;
    //     e = a * b * c * d;
    //     cout << (e % 100);
    //     string f = to_string(e); // integer to string
    //     cout << f[f.size() - 2];
    //     setfill() changes the fill character and remains in effect until changed again.
    //     setw(n) → “Reserve at least n character positions.”
    e = 1;
    e = (e * (a % 100) % 100);
    e = (e * (b % 100) % 100);
    e = (e * (c % 100) % 100);
    e = (e * (d % 100) % 100);
    cout << setw(2) << setfill('0') << e;
}