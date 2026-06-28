#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "enter a character :";
    cin >> a;
    if (a >= 48 && a <= 57)
    {
        cout << "It is a number" << endl;
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "It is a Upper case letter" << endl;
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "It is a lower case letter" << endl;
    }
    else
    {
        cout << "Enter a valid character";
    }
}
