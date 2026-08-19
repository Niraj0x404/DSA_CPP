#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {2, 3, 4, 5}; // static allocation
    int *brr = new int[6];    // dynamic allocation
    brr[0] = 88;
    for (int i = 0; i < 4; i++)
    {
        cout << brr[i] << endl;
    }
}