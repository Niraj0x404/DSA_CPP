#include <iostream>
using namespace std;
int x = 10; // global variable
void change()
{
    x = 29;
}
int main()
{
    int x = 19;
    cout << x << endl;
    change();
    cout << x << endl;
}

// Local>>>>>>>global