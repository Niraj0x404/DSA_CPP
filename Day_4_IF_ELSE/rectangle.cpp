#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cout << "Enter length of rectangle : ";
    cin >> length;
    cout << "Enter breadth of rectangle : ";
    cin >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << "Area of rectangle :" << area << endl;
        cout << "Area won by :" << area - perimeter;
    }
    else if (perimeter > area)
    {
        cout << "Perimeter of rectangle :" << perimeter << endl;
        cout << "Perimeter won by :" << perimeter - area;
    }
    else
    {
        cout << "Draw : get ready for super_over";
    }
}
