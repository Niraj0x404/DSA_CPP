#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if ((n % 3 == 0) || (n % 5 == 0))
    {
        cout << "Number is divisble by 3 or 5 :";
    }
    else
    {
        cout << "Enter valid Number which is divisble by 3 or 5 :";
    }
}
