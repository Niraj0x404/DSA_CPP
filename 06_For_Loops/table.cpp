#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    cout << "Write the table of " << n << " for first" << " " << p << " multiples." << endl;
    for (int i = 1; i <= p; i++)
    {
        cout << 19 * i << endl;
    }
}