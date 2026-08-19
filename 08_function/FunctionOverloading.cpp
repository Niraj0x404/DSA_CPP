#include <iostream>
using namespace std;
// void fun(int y = 7)
// {
//     cout << "hello" << endl;
// }.     It will give error

void fun(int y)
{
    cout << "hello" << endl;
}

void fun()
{
    cout << "How are you ?" << endl;
}

// void fun(int y, int z)
// {
//     cout << "I am Fine" << endl;
// }
int main()
{
    fun();
    // fun(9);
    // fun(9, 8);
}
