#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p;
    cout << "Enter size of array" << endl;
    cin >> p;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cout << "Array" << endl;
    for (int i = 0; i < p; i++)
    {
        cout << arr[i] << " ";
    }

    // print the negative element of array
    cout << endl
        << "negative element of array:" << endl;
    for (int i = 0; i < p; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }
}