#include <iostream>
using namespace std;
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Method 1 :" << a << " " << b << endl;
}

void swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Method 2 :" << a << " " << b << endl;
}

void swap3(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap4(int &a, int &b) // alias
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    // swap1(a, b);
    // swap2(a, b);
    // swap3(a, b);
    swap4(a, b);
    cout << "Method 3 :" << a << " " << b << endl;
}