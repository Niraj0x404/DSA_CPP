#include <iostream>
using namespace std;
#define intt long long
int main()
{
    intt n;
    cin >> n;
    if (n % 2 == 0 && n > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
}