#include <iostream>
using namespace std;
int main()
{
    // for (int i = 65; i <= 90; i++)
    // {
    //     cout << char(i) << " " << i << endl;
    // }
    // for (int i = 97; i <= 122; i++)
    // {
    //     cout << char(i) << " " << i << endl;
    // }
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        for (char ch = c; ch <= 'Z'; ch++)
        {
            cout << ch << " " << (int)ch << " " << char(ch + 32) << " " << (int)char(ch + 32) << " " << endl;
        }
    }
    if (c >= 'a' && c <= 'z')
    {
        for (char ch = c; ch <= 'z'; ch++)
        {
            cout << ch << " " << (int)ch << " " << char(ch - 32) << " " << (int)char(ch - 32) << " " << endl;
        }
    }
}
