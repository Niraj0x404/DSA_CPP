#include <iostream>
using namespace std;
int main()
{
    int x, sum;
    sum = 0;
    cin >> x;
    while (x != 0)
    {
        int last_digit = x % 10;
        sum = sum + last_digit;
        x = x / 10;
    }
    cout << sum;
}