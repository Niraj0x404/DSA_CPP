#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a number :" << endl;
    cin >> a;
    cout << "enter exponential :" << endl;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
        if (a == 1)
            break;
    }
    if (a == 0 && b == 0)
        cout << "indertiminate form";
    else
        cout << ans;
}