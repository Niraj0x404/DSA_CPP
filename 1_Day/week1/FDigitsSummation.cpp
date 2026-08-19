#include <iostream>
#include <string>
using namespace std;
#define intt long long int
int main()
{
    intt a, b;
    cin >> a >> b;
    cout << (a % 10) + (b % 10) << endl;

    // character to Integer
    // Strings use 0-based indexing.
    // 0 is used bcz of ASCII value
    string c, d;
    cin >> c >> d;
    int z, y;
    z = c[c.size() - 1] - '0';
    y = d[d.size() - 1] - '0';
    cout << z + y << endl;
}