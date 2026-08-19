// Nested tree greatest of tree
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 1st digit :";
    cin >> a;
    cout << "Enter 2nd digit :";
    cin >> b;
    cout << "Enter 3rd digit :";
    cin >> c;
    (a > b && a > c) ? cout << a << " is Greatest" : ((b > c) ? cout << b << " is greatest" : cout << c << " is greatest");
}