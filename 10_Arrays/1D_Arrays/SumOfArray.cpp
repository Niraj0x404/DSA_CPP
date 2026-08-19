#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p, sum;
    cout << "Enter size of array :" << endl;
    cin >> p;
    sum = 0;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of elements in Array: " << sum << endl;
}