#include <iostream>
using namespace std;
#define intt long long
// syntax
// return_type(data type of input) function name(data_type input1, data_type input2.......) {
// result must be same as return_type
// return result ;
// }
// void-- i am not returning anything;
void greet(string name)
{
    cout << "Hello!" << name << endl;
}
int add(int p, int q)
{
    return p + q;
}
int main()
{
    int p, q;
    cin >> p >> q;
    cout << add(p, q) << endl;
    string name;
    cin >> name;
    greet(name);
    // cout << greet(name) << endl;
}