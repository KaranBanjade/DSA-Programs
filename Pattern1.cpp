#include <iostream>
using namespace std;
int main()
{
cout << "1.++++++++++\n";
    /*
   *
   **
   ***
   ****
*/
    int i = 0;
    int j = 0;
    while (i < 4)
    {
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
        j = 0;
    }
       cout << "2.++++++++++\n";
    /*
   54321
   54321
   54321
   54321
   54321
*/
    i = 1;
    while (i < 6)
    {
        j = 5;
        while (j > 0)
        {
            cout << j;
            j--;
        }
        cout << "\n";
        i++;
    }
    
return 0;
}