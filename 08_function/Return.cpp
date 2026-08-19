#include <iostream>
using namespace std;
void run(int n)
{
    cout << n << endl;
    if (n > 98)
        return;
    cout << n * n << endl;
}
int main()
{
    int n;
    cin >> n;
    run(n);
}