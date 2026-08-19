#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {74, 84, 89, 99, 66, 54, 32};
    // int arr[5] = {74, 84, 89, 99, 66, 54, 32}; // error 5<7
    // int arr[3]; // garbage value
    // int arr[10] = {}; // Default 0
    cout << sizeof(arr) << endl;
    cout << sizeof(arr) / 4 << endl;
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}