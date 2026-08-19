#include <iostream>
using namespace std;
#define intt long long
int main()
{
    intt A, B;
    char S;
    cin >> A >> S >> B;
    if (S == '<')
    {
        if (bool(A < B))
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    if (S == '>')
    {
        if (bool(A > B))
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    if (S == '=')
    {
        if (bool(A == B))
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
}