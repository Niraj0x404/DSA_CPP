#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a digit :";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "Divisible by 5 and 3" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << "Divisible by 5 " << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Divisible by 3 " << endl;
    }
    else
    {
        cout << "kya haal hai ";
    }
}
