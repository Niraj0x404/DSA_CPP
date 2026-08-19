#include <iostream>
using namespace std;
int main()
{
    // int x = 4;
    // if (x == 4)
    //     cout << "Hlo";
    // else
    //     cout << "No";

    // int b = 0;
    // if (b == 0)
    //     cout << "Hlo";
    // else
    //     cout << "No";

    // int b = 0;
    // if (b = 0)
    //     cout << "Hlo";
    // else
    //     cout << "No";

    // int b = 4;
    // if (b++)
    //     cout << "Hlo"<<b;
    // else
    //     cout << "No"<<b;

    // int b = 4, a=6;
    // if (b++ || a++)
    //     cout << "Hlo"<<b<<endl<<a;
    // else
    //     cout << "No"<<b<<endl<<a;

    int b = 4, a=6;
    if (a++ || b++)
        cout << "Hlo"<<b<<endl<<a;
    else
        cout << "No"<<b<<endl<<a;
}