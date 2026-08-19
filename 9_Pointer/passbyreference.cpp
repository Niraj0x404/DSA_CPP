#include <iostream>
using namespace std;
void change(int x) // alag dabba hai-------  Pass by value
{
    x = 20;
    cout << &x << endl;
}
void change2(int* x) // alag dabba hai-----  Pass By Reference
{
    *x = 20;
    cout << &x << endl;
}
int main()
{
    int x = 10;
    change2(&x);
    cout << x << endl;
    cout << &x << endl;
}