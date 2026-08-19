#include <iostream>
#include <cmath>
using namespace std;
#define intt long long
int main()
{
    intt A, B, C, D;
    cin >> A >> B >> C >> D;
    // OVERFLOW BCZ OF pow which will return double as its final output
    // if (pow(A, B) > pow(C, D))
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    if (B * log(A) > D * log(C))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}