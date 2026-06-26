#include <iostream>
using namespace std;
int main()
{
    float cp;
    float sp;
    cout << "cost price is: ";
    cin >> cp;
    cout << "selling price is :";
    cin >> sp;
    if (sp > cp)
    {
        float profit = sp - cp;
        cout << "profit of : " << profit;
    }
    else if (sp < cp)
    {
        float loss = cp - sp;
        cout << "loss of : " << loss;
    }
    else
    {
        cout << "no loss or profit ";
    }
}
