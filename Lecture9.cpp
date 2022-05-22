#include <iostream>
using namespace std;
int main()
{
    int amount = 1210;
    switch (amount >= 100)
    {
    case 1:
        cout << "100: " << amount / 100 << endl;
        amount %= 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        cout << "50: " << amount / 50 << endl;
        amount %= 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        cout << "20: " << amount / 20 << endl;
        amount %= 20;
        break;
    }
    cout << "1: " << amount << endl;
    return 0;
}