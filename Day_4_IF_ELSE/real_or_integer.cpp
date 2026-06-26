#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "enter real number :";
    cin >> n;
    int y = (int)n;
    float decimal = n - y;
    int integer = y;
    if (n == y)
    {
        cout << "Integer" << endl << y;
    }
    else
    {
        cout << "Real number " << n << endl << integer << endl << decimal;
    }
}
