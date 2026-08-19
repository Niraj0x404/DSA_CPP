#include <iostream>
using namespace std;
#define intt long long
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << min(A, min(B, C)) << ' ' << max(A, max(B, C)); // inside the bracket they have to be of same data type
    // cout<<max({a,b,c.....})<<min({a,b,c,.....})
    //     if (A >= B && A >= C)
    //  {
    //     if (B < C)
    //         cout << B << " " << A;
    //     else
    //         cout << C << " " << A;
    //  }
    //  else if (B >= A && B >= C)
    //  {
    //     if (A < C)
    //         cout << A << " " << B;
    //     else
    //         cout << C << " " << B;
    //  }
    //  else
    //  {
    //     if (A < B)
    //         cout << A << " " << C;
    //     else
    //         cout << B << " " << C;
    //  }
}