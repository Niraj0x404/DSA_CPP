#include <iostream>
using namespace std;
void MinOfTwo(int a, int b) // parameters
{                           // 2 number ko receive krega uska Minimum print karega
    if (a < b)
        cout << a << " " << "is smaller" << endl;
    else
        cout << b << " " << "is smaller" << endl;
}
int main()
{
    MinOfTwo(456, 789); // arguments.
}