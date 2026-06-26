#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    // n value is changing in this code
    // if (n<0){
    // n*=-1;
    // cout<<n
    // }
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        cout << -n;
    }
}
