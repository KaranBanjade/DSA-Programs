#include <iostream>
using namespace std;

void PrintFibonacci(int n)
{
    int first = 0, second = 1;
    cout << first << ", " << second << ", ";
    for (int i = 0; i < n; i++)
    {
        int temp = first + second;
        first = second;
        second = temp;
        cout << temp << ", ";
    }
}
int main()
{
    int n = 7;
    PrintFibonacci(n);
    return 0;
}