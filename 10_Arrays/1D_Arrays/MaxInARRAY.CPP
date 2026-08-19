#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p, max;
    cout << "Enter size of array :" << endl;
    cin >> p;

    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i < p; i++)
    {

        if (max <= arr[i])
        {
            max = arr[i];
            // mx=max(mx,arr)
        }
    }
    cout << "Max of elements in Array:" << max;
}