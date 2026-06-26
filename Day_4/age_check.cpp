#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are a Rider" << endl;
    }
    else
    {
        cout << "wait till 18 " << endl;
    }
}
