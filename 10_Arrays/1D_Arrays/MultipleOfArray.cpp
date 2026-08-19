#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p, mul;
    cout << "Enter size of array :" << endl;
    cin >> p;
    mul = 1;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        mul *= arr[i];
    }
    cout << "Multiplication of elements in Array: " << mul << endl;
}