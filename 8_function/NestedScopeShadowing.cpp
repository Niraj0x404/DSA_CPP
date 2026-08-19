#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    // int x = 8;
    {
        // int x = 8;
        x = 90;
    }
    cout << x << endl;
}