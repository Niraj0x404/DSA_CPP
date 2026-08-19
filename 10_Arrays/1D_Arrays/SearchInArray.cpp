#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, s;
    cout << "Enter number to search in Array :" << endl;
    cin >> s;
    cout << "Enter size of array :" << endl;
    cin >> p;
    bool flag = false;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        if (arr[i] == s)
        {
            flag = true;
            cout << s << " is present at " << i << endl;
            break;
        }
    }
    if (flag == true)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
}