#include <iostream>
#include <climits> // Provides UINT_MAX
using namespace std;
int main()
{
    // Declaring a variable that only stores non-negative numbers
    unsigned int x = 42; 

    // Outputting the assigned value
    cout << "The value of x is: " << x << endl;

    // Demonstrating the minimum value an unsigned int can hold
    cout << "Minimum value of an unsigned int: 0" << endl;

    // Demonstrating the maximum value from <climits>
    cout << "Maximum value of an unsigned int (UINT_MAX): " << UINT_MAX << endl;

    return 0;
}
