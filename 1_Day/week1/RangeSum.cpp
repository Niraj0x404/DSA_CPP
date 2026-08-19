// prefix sum idea
#include <iostream>
using namespace std;
#define intt long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        intt l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        intt sum = (r * (r + 1)) / 2 - ((l - 1) * l) / 2;
        cout << sum << endl;
    }
}