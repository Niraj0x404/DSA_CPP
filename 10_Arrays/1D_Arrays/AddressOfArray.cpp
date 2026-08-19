#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 23, 34, 45, 56, 78, 89, 90};
    int n = sizeof(arr) / 4;
    cout << arr << endl;
    cout << &arr[0] << endl; // same address as arr
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
}
