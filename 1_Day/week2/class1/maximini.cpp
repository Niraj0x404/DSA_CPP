#include <iostream>
using namespace std;
#define intt long long
// if one value is default then rest all the value followed by default value will be default;
int maxi(intt a, intt b, intt c, intt d)
{
    intt max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = b;
    if (d > max)
        max = d;

    return max;
}
int mini(intt a, intt b, intt c, intt d)
{
    intt min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = b;
    if (d < min)
        min = d;

    return min;
}
int main()
{
    intt a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << maxi(a, b, c, d) << " " << mini(a, b, c, d) << endl;
}