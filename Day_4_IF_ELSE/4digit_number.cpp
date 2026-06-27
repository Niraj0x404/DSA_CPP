#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "Enter 4 digit number :";
    cin >> a;
    if (a > 999)
    {
        if (a < 9999)
        {
            cout << "a is 4 digit number :" << a << endl;
        }
    }
    else
    {
        cout << "plz read the instruction properly ";
    }
}
