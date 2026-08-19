#include <iostream>
using namespace std;
void print8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= (2 * n - (2 * i - 1)); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print8(n);
}

// i --   5
// column -- 9
//  1 -- [0,9,0]
//  2 -- [1,7,1]
//  3 -- [2,5,2]
//  4 -- [3,3,3]
//  5 -- [4,1,4]
//.      [n-i,2*i-1,n-i]
// 3 different loops :::  1. space. 2. star   3.space