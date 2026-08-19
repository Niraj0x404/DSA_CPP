#include <iostream>
using namespace std;
#define intt long long
int main()
{
    char a;
    cin >> a;
    if (int(a) <= 122 && int(a) >= 97)
    {
        cout << char(int(a) - 32);
    }
    else if (int(a) >= 65 && int(a) <= 90)
    {
        cout << char(32 + int(a));
    }
}