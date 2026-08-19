#include <iostream>
using namespace std;
int main()
{
    float unit, bill, supercharge, TotalBill;
    cout << "Enter your electricity bill unit :";
    cin >> unit;
    if (unit <= 100)
    {
        bill = 1.5 * unit;
        supercharge = 0.15 * bill;
        TotalBill = supercharge + bill;
        cout << "Total Bill : " << TotalBill;
    }
    else if (unit <= 300)
    {
        unit -= 100;
        bill = (1.5 * 100) + (2.5 * unit);
        supercharge = 0.15 * bill;
        TotalBill = bill + supercharge;
        cout << "Total Bill: " << TotalBill;
    }
    else
    {
        unit = unit - 300;
        bill = (100 * 1.5) + (200 * 2.5) + (unit * 4);
        supercharge = 0.15 * bill;
        TotalBill = bill + supercharge;
        cout << "Total Bill: " << TotalBill;
    }
}