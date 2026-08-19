#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p, min;
    cout << "Enter size of array :" << endl;
    cin >> p;

    int arr[p];
    min = arr[0];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < p; i++)
    {
        min = arr[i];
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << "Min of elements in Array:" << min;
}