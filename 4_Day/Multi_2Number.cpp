#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter 1st number :";
    cin >> a;
    cout << "enter 1st number :";
    cin >> b;
    float mul = a * b;
    if (mul < 0)
    {
        if (a < 0 || b < 0)
        {
            if (a < 0)
            {
                cout << "Negative number is :" << a << endl;
            }
            else
            {
                cout << "Negative number is :" << b << endl;
            }
        }
        cout << "product is negative : " << mul << endl;
    }
    else if (mul == 0)
    {
        cout << "product is zero : " << mul << endl;
    }
    else
    {

        cout << "product is positive : " << mul << endl;
    }
}