#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st number :";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    if (a % 2 != 0 && b % 2 != 0)
    {
        cout << "Both" << a << " and " << b << " are odd number";
    }
    else if (a % 2 != 0 || b % 2 != 0)
    {
        if (a % 2 != 0)
        {
            cout << a << " is odd number" << endl;
        }
        else
        {
            cout << b << " is odd number" << endl;
        }
    }
    else
    {
        cout << "Both" << a << " and " << b << " are Not odd number";
    }
}
