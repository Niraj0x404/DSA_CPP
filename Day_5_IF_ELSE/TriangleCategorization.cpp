#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 1st side of triangle :";
    cin >> a;
    cout << "Enter 2nd side of triangle :";
    cin >> b;
    cout << "Enter 3rd side of triangle :";
    cin >> c;
    if ((((a + b) > c) && ((b + c) > a) && ((c + a) > b)))
    {
        cout << "it is a valid Triangle " << endl;
        if (a == b == c)
        {
            cout << "it is a Equilateral Triangle " << endl;
        }
        else if ((a == b) || (b == c) || (c == a))
        {
            cout << "it is a Isosceles Triangle " << endl;
        }
        else
        {
            cout << "it is a Scalene Triangle " << endl;
        }
    }
    else
    {
        cout << "it is not a valid triangle " << endl;
    }
}
