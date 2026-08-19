#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'a'; ch < 'a' + n; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (char ch = 'A'; ch < 'A' + n; ch++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print8(int n)

{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                cout << (char)(64 + j);
            else
                cout << (char)(97 + j);
        }
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                cout << (char)(i + 63);
            else
                cout << i;
        }
        cout << endl;
    }
}

void print11(int n)
{
    // Method - 1
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Method - 2
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}
void print12(int n)
{
    int m;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print13(int n)
{
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*" << " ";
            }
            else
                cout << " " << " ";
        }
        cout << endl;
    }
}

void print14(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start++ << " ";
        }
        cout << endl;
    }
}

void print15(int n)
{

    // 1st n odd numbers == 2*i-1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 2 * j - 1 << " ";
        }
        cout << endl;
    }
}

void print16(int n)
{

    // 1st n odd numbers == 2*i-1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }

            else
            {

                if (j % 2 == 1)
                    cout << 0 << " ";
                else
                    cout << 1 << " ";
            }

            // if ((i + j) % 2 == 0)
            //     cout << 1 << " ";
            // else
            //     cout << 0 << " ";
        }
        cout << endl;
    }
}

void print17(int n)
{

    // // Method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if ((i + j) > n)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // Method 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j);
        }
        cout << endl;
    }
}

void print20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + i);
        }
        cout << endl;
    }
}

void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print22(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print23(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= (2 * i) - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Method 2
    int nsp = n - 1, nst = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // spaces
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++) // stars
        {
            cout << "* ";
        }
        nsp--;
        nst += 2;
        cout << endl;
    }
}

void print24(int n)
{
    int nst = (2 * n) - 1, nsp = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // spaces
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++) // stars
        {
            cout << "* ";
        }
        nsp++;
        nst -= 2;
        cout << endl;
    }
}

void print25(int n)
{
    // int nsp = n - 1, nst = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp; j++) // spaces
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst; j++) // stars
    //     {
    //         cout << "* ";
    //     }
    //     nsp--;
    //     nst += 2;
    //     cout << endl;
    // }
    // nst = (2 * n) - 3, nsp = 1;

    // for (int i = 1; i <= n - 1; i++)
    // {
    //     for (int j = 1; j <= nsp; j++) // spaces
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst; j++) // stars
    //     {
    //         cout << "* ";
    //     }
    //     nsp++;
    //     nst -= 2;
    //     cout << endl;
    // }

    /// Method 2
    int nst = 1, nsp = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= nsp; j++) // spaces
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++) // stars
        {
            cout << "* ";
        }
        if (i < n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        cout << endl;
    }
}

void bridge(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    n--;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Numberspiral(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << min(i, j) << " ";
            // if (i <= j)
            //     cout << i << " ";
            // else
            //     cout << j << " ";
        }
        cout << endl;
    }
}

void Numberspiral1(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        { 
            int a = i, b = j;
            if (i > n)
                a = 2 * n - i;
            if (j > n)
                b = 2 * n - j;
            cout << min(a, b) << " ";
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << min(i, j) << " ";
    //     }
    //     for (int j = n - 1; j >= 1; j--)
    //     {
    //         cout << min(i, j) << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << min(i, j) << " ";
    //     }
    //     for (int j = n - 1; j >= 1; j--)
    //     {
    //         cout << min(i, j) << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    int n;
    cin >> n;
    Numberspiral1(n);
}
