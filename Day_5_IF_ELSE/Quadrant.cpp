#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "enter a digit for X axis: ";
    cin >> x;
    cout << "enter a digit for Y axis: ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "it lies in origin" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "1st Quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "2nd Quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "3rd Quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "4th Quadrant" << endl;
    }
    else if (x == 0)
    {
        cout << "it lies in Y axis" << endl;
    }
    else
    {
        cout << "it lies in X axis" << endl;
    }
}
