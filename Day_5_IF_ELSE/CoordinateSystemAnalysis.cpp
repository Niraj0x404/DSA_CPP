#include <iostream>
using namespace std;
int main()
{
    float x1, x2, x3, y1, y2, y3;
    cout << "Enter the coordinate of x1 :";
    cin >> x1;
    cout << "Enter the coordinate of x2 :";
    cin >> x2;
    cout << "Enter the coordinate of x3 :";
    cin >> x3;
    cout << "Enter the coordinate of y1 :";
    cin >> y1;
    cout << "Enter the coordinate of y2 :";
    cin >> y2;
    cout << "Enter the coordinate of y3 :";
    cin >> y3;
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        cout << "Points are Collinear";
    else
        cout << "Points are Non - Collinear";
}
