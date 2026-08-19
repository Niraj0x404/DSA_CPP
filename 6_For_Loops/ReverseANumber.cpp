#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0, reverse = 0, y;
    cin >> x;
    y = x;
    // if (x == 0)
    //     cout << 0;
    // while (x != 0)
    // {
    //     cout << x % 10;
    //     x = x / 10;
    // }

    while (x != 0)
    {
        int last_digit = x % 10;
        reverse = (reverse * 10) + last_digit;
        sum = sum + last_digit;
        x = x / 10;
    }
    cout << " Reverse of Number " << reverse << endl;
    cout << " Sum of Number " << sum << endl;
    cout << " Original + Reverse: " << reverse + y << endl;
}