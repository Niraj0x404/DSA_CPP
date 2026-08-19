#include <iostream>
using namespace std;
#define intt long double
int main()
{
    float N;
    cin >> N;
    if (N == (int)N)
    {
        cout << "int" << " " << N;
    }
    else
    {
        cout << "float" << " " << (int)N << " " << (N - (int)N);
    }

    // if(ceil(N) == floor(N))
    // {
    //     cout << "int" << " " << N;
    //  }
    //  else
    //  {
    //     cout << "float" << " " << floor(N) << " " << (N - floor(N));
    //   }
}