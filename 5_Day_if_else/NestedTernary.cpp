#include <iostream>
using namespace std;
int main()
{
    int x = 11;
    int y = (x <= 23) ? ((x++ >= 12) ? x - 4 : x * 8) : ((++x >= 12) ? x - 4 : x * 8);
    cout << y;
}
