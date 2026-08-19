#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int *ptr = &x;
    // int *p2 = &x;
    cout << x << " " << &x << endl;
    // cout << ptr << " " << &ptr << endl;
    // cout << p2 << " " << &p2 << endl;
    // cout << *ptr;

    *ptr = 133;
    cout << x << endl;
    *ptr += 4;
    cout << x << endl;
}