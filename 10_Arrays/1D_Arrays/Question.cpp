#include <bits/stdc++.h>
using namespace std;
void ReverseArray1(vector<int> v) // pass by value
{
    // reverse(v.begin(), v.end());
    int m = v.size() - 1;
    int temp;
    for (int i = 0; i < v.size() / 2; i++)
    {
        temp = v[i];
        v[i] = v[m];
        v[m] = temp;
        m--;
    }
    for (int element : v)
        cout << element << " ";
}

void ReverseArray2(vector<int> v) // pass by value
{
    // reverse(v.begin(), v.end());
    int j = v.size() - 1;
    for (int i = 3; i < j; i++, j--) // part of arrays can be reversed
    {
        // swap(v[i], v[j]);
        swap(v[i], v[j]);
    }
    for (int element : v)
        cout << element << " ";
}
void Rotatearrayleft(vector<int> &v) // pass by reference
{
    int k;
    cin >> k;
    k = k % v.size();
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());

    for (int element : v)
        cout << element << " ";
}
void Rotatearrayright(vector<int> &v) // pass by reference
{
    int k;
    cin >> k;
    k = k % v.size();
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int element : v)
        cout << element << " ";
}

void Segregate1(vector<int> &v) // pass by reference
{
    int m = v.size() - 1;
    for (int i = 0; i < m;)
    {
        if (v[i] == 0)
        {
            i++;
        }
        else if (v[m] == 1)
        {
            m--;
        }
        else
        {
            swap(v[i], v[m]);
            i++;
            m--;
        }
    }
    for (int element : v)
    {
        cout << element << " ";
    }
}
void Segregate2(vector<int> &v) // pass by reference
{
    int i = 0;
    int j = 0;
    int m = v.size() - 1;
    while (j <= m)
    {
        if (v[j] == 0)
        {
            swap(v[i], v[j]);
            i++;
            j++;
        }
        else if (v[j] == 1)
        {
            j++;
        }
        else
        {
            swap(v[j], v[m]);
            m--;
        }
    }
    for (int element : v)
    {
        cout << element << " ";
    }
}
void Segregate3(vector<int> &v) // pass by reference
{
    int zeroes = 0, ones = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zeroes++;
        }
        else
            ones++;
    }
    for (int i = 0; i < zeroes; i++)
    {
        v[i] = 0;
    }
    for (int i = zeroes; i < v.size(); i++)
    {
        v[i] = 1;
    }
    for (int element : v)
        cout << element << " ";
}
void twosum(vector<int> &v)
{
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> ans(2);
        for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++){
            if (v[i] + v[j] == target){
                ans[0]=i;
                ans[1]=j;
                return ans;
            }
        }
    }
    return ans;
    }
};
}
int main()
{
    vector<int> v = {0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 8, 9, 8, 9, 8, 9, 8, 9};
    Segregate2(v);
}