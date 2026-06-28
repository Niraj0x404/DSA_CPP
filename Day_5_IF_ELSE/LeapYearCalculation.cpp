#include <iostream>
using namespace std;
int main()
{
    int leap_year;
    cout << "Enter any year:";
    cin >> leap_year;
    if ((leap_year % 400 == 0) || (leap_year % 4 == 0 && leap_year % 100 != 0))
    {
        cout << leap_year << " ia a Leap year" << endl;
    }
    else
    {
        cout << leap_year << " is NOT a Leap year" << endl;
    }
}
