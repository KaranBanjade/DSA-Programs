#include <iostream>
using namespace std;
int main()
{
    long nums;
    cin >> nums;
    int sum = 0, prod = 1;
    while (nums != 0)
    {
        sum += nums % 10;
        prod *= nums % 10;
        nums /= 10;
    }
    cout << prod - sum;
}