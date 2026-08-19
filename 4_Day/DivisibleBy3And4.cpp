#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st digit :";
    cin >> a;
    b = a % 3;
    c = a % 5;
    if (b == c)
    {
        cout << "Divisible by both 3 and 5";
    }
    else
    {
        cout << "Not Divisible by both 3 and 5";
    }
}