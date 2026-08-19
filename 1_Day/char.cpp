#include <iostream>
using namespace std;
int main()
{
    cout << 'f' << endl;
    cout << 'f' + 1 << endl;
    cout << (char)('f' + 1) << ' ' << (int)('f' + 1) << endl;
    cout << (char)('f' - 2) << endl;

    // garbage value--> Ramdom value or undefined value or UB
    cout << 'Niraj' << endl;

    // Variable in c++ cant be used twice .
    // int x = 0;
    // int x = 9; // this will through  error .

    char c = 65;
    cout << c << endl;

    cout << (bool)-456 << endl;

    // strings are derived from character

    string z;
    getline(cin, z);  // only for string
}