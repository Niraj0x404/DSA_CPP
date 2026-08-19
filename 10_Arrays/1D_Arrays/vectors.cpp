#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(5);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> brr(8, -1);
    int m = brr.size();
    cout << "Size of an array before using push_back: " << m << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    brr.push_back(45);
    m = brr.size();
    cout << "Size of an array after using push_back: " << m << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    brr.push_back(18);
    m = brr.size();
    cout << "Size of an array after doing 2nd time push_back: " << m << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    brr.pop_back();
    m = brr.size();
    cout << "Size of an array after doing pop_back: " << m << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}