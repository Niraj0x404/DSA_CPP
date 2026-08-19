#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    // int*p2;
    // p1=&p2; /// error
    cout << &x << " " << x << endl;
    cout << *p1 << endl; // single deference operator
    cout << *p2 << endl;
    cout << **p2 << endl;
    cout << &p1 << " " << p1 << endl;
    cout << &p2 << " " << p2 << endl;

    // Used to store the Address of pointer
}