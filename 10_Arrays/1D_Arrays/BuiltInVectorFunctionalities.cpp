#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 34, 32, 45, 65, 55, 43, 32, 21, 12, 23, 34, 45, 78, 90, 0};
    // sort(v.begin(), v.end());  // Sort the entire vector
    // sort(v.begin() +1, v.end());  // Sort from index 1 to the end
    // sort(v.begin(), v.end()+2); // error
    // sort(v.begin(), v.end()-1);  // Sort all elements except the last one
    // sort(v.begin()-1, v.end()); // error
    // reverse(v.begin(), v.end());  // Reverse the entire vector
    // reverse(v.begin()+1, v.end()); // Reverse from index 1 to the end
    // reverse(v.begin(), v.end()+1); // error
    reverse(v.begin(), v.end()-1);  // Reverse all elements except the last one
    // reverse(v.begin()-1, v.end()); //error
    
    reverse(v.begin()-1, v.end());
    for (int element : v)
        cout << element << " ";
}