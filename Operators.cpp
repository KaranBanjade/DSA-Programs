#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 1;
    int t = i + j;
    cout << "Fibonacci\n";
    cout << i << ", " << j << ", ";
    for (int k = 0; k < 10; k++)
    {
        cout << t << ", ";
        i = j;
        j = t;
        t = i + j;
    }
    cout << "\nPrime Or Not\n";
    cin >> i;
    for (j = 2; j < i / 2; j++)
    {
        if (i % j == 0)
        {
            cout << "Not Prime\n";
            break;
        }
    }
    if (j >= i / 2)
        cout << "Prime";
    return 0;
}