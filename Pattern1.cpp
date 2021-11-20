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
return 0;
}