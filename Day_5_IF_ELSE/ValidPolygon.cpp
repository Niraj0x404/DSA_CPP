#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "Enter number of sides of Simple polygon :";
    cin >> n;
    cout << "Enter sum of interior angles: ";
    cin >> a;
    int s = (n - 2) * 180;
    if (s == a)
    {
        cout << "Valid Polygon" << endl;
    }
    else
    {
        cout << "Note a Valid Polygon" << endl;
    }
}
