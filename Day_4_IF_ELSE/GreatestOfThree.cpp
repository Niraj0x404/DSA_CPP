#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter 1st number :";
    cin >> a;
    cout << "enter 2nd number :";
    cin >> b;
    cout << "enter 3rd number :";
    cin >> c;
    if ((a > b) & (b > c))
    {
        cout << "a is the greatest number :" << a << endl;
    }
    else if ((b > a) & (b > c))
    {
        cout << "b is the greatest number :" << b << endl;
    }
    else
    {
        cout << "c is the greatest number :" << c << endl;
    }
}
