#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int i = 0;
    int j = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - i)
        {
            cout << " ";
            j++;
        }
        j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        j = 0;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
    cout << "\n*****************\n";
    i = 0;
    j = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - i)
        {
            cout << " ";
            j++;
        }
        j = 0;
        while (j <= i)
        {
            cout << j + 1;
            j++;
        }
        j = 0;
        while (j < i)
        {
            cout << i - j;
            j++;
        }
        cout << "\n";
        i++;
    }
    i = 0;
    j = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - i)
        {
            cout << j + 1;
            j++;
        }
        j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        j = 0;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
}