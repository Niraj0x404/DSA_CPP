#include <iostream>
using namespace std;
void countdigit(int n, int *ptr)
{
    int count = (n == 0) ? 1 : 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    *ptr = count;
}

int main()
{
    int n, c = 0;
    cin >> n;
    countdigit(n, &c);
    cout << c;
}