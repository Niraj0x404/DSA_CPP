#include <iostream>
using namespace std;

void fun(int y)
{
    cout << "hello" << endl;
}

void fun(char y)
{
    cout << "OK OK OK OK " << endl;
}

void fun(float y)
{
    cout << "I am Fine" << endl;
}

// void fun(int y, int z)
// {
//     cout << "I am Fine" << endl;
// }
int main()
{
    fun('A');
    // fun(9);
    // fun(9, 8);
}
