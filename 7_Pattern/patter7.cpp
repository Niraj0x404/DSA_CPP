#include <iostream>
using namespace std;
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
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
    print3(n);
}

// i --   5
// column -- 9
//  1 -- [4,1,4]
//  2 -- [3,3,3]
//  3 -- [2,5,2]
//  4 -- [1,7,1]
//  5 -- [0,9,0]
//.      [n-i,2*i-1,n-i]
// 3 different loops :::  1. space. 2. star   3.space