#include <iostream>
using namespace std;
#define intt long long
int main()
{
    // for(s1;s2;s3) {
    //     //code here
    // s1 : executed before the loop;
    // s2 : condition of the loop;
    // s3 : executed after each iteration
    //  }
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    for (int p = 0, j = 0; p < 5 && j < 8; p++, j++)
    {
        cout << p << " " << j << endl;
    }
    int z = 0;
    while (z < 8)
    {
        cout << z << endl;
        z++;
    }
    int o = 0;
    for (; o < 3;)
    {
        cout << o << endl;
        o++;
    }
}