#include <iostream>
using namespace std;
#define intt long long
int main()
{
    // type casting
    // long = int;
    // long int xyz;   ------ same as int ;
    // UNSIGNED INT

    int f = 1 << 30; // 2^30
    int g = 1 << 30; // 2^30

    cout << INT_MAX << endl;
    cout << INT_MIN << endl;

    int max, min;
    max = 2147483647;
    min = -2147483648;
    cout << max << endl;
    cout << min << endl;
    cout << max + 1 << endl;
    cout << min - 1 << endl;

    cout << LLONG_MAX << endl;
    cout << LLONG_MIN << endl;
}