#include <iostream>
using namespace std;
void run()
{
    cout << "2nd class of function" << endl;
}
void tun()
{
    cout << "3rd class of function" << endl;
    run();
}
void lun()
{
    cout << "4th class of function" << endl;
    tun();
}
void fun()
{
    cout << "1st class of function" << endl;
    lun();
}
int main()
{
    fun();
    cout << "Hii Hlo" << endl;
    // lun();
    // tun();
    // run();
    // fun();
}