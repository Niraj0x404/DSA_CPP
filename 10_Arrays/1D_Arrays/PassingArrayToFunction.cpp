#include <bits/stdc++.h>
using namespace std;
void change(int arr[])
{
    arr[0] = 22;
}
int main()
{
    int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    arr[0] = 3;
    change(arr);
    cout << arr[0] << endl;
}