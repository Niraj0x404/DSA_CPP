#include <iostream>
using namespace std;
int main()
{
    // int x = 0; // Anything except 0 is TRUE
    float x=0.0000000001;
    if (x)
        cout << "Hlo";
    else
        cout << "No";
}