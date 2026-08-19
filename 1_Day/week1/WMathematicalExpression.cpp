#include <iostream>
using namespace std;
#define intt long long
int main()
{
    intt A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if (S == '+')
    {
        if (C == (A + B))
        {
            cout << "Yes";
        }
        else
        {
            cout << A + B;
        }
    }
    if (S == '-')
    {
        if (C == (A - B))
        {
            cout << "Yes";
        }
        else
        {
            cout << A - B;
        }
    }
    if (S == '*')
    {
        if (C == (A * B))
        {
            cout << "Yes";
        }
        else
        {
            cout << A * B;
        }
    }
}