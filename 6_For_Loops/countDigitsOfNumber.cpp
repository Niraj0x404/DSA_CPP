#include <iostream>
using namespace std;
int main()
{
    int x, count;
    count = 0;
    cin >> x;
    if (x == 0) 
        count++;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    cout << count;
}