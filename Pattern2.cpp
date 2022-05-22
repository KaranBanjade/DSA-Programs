#include <iostream>
using namespace std;
int main()
{
    /*
        ABC
        BCD
        CDE
    */
    char c = 'A';
    char d = 'A';
    char e;
    while (c < 'E')
    {
        d = 'A';
        e = c;
        while (d < 'E')
        {
            cout << e++;
            d++;
        }
        c++;
        cout << "\n";
    }
    /*
        ABC
        BCD
        CDE
    */
    c = 'A';
    d = 'A';
    while (c < 'E')
    {
        d = 'A';
        while (d <= c)
        {
            cout << c;
            d++;
        }
        c++;
        cout << "\n";
    }
    /*
    A
    BC
    DEF
    GHIJ
    Note: SOlve with 2 char variables only
    */
    c = 'E';
    d = 'A';
    while (c < 'E')
    {
        d = 'A';
        while (d <= c)
        {
            cout << 'a';
            d++;
        }
        c++;
        cout << "\n";
    }
    /*
    A
    BC
    CDE
    DEFGH
    Note: SOlve with 2 char variables only
    */
    c = 'E';
    d = 'A';
    while (c < 'E')
    {
        d = 'A';
        while (d <= c)
        {
            cout << 'a';
            d++;
        }
        c++;
        cout << "\n";
    }
    /*
    D
    CD
    BCD
    ABCD
    Note: SOlve with 2 char variables only
    Note: DO it yourself
    */
    int n = 5;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (char)('A' + n + j - i - 1) << "\t";
            j++;
        }
        cout << "\n";
        i++;
    }
    /*
      *
     **
    ***
   ****
  Note:
  Note:
  */
    int spaces = 4;
    i = 0;
    int j = 0;
    while (i < 5)
    {
        j = 0;
        while (j < spaces - i)
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
        cout << "\n";
        i++;
    }
    /*
          *
         **
        ***
       ****
      Note:
      Note:
      */
    spaces = 4;
    i = 0;
    j = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            if (j < spaces - i)
                cout << " ";
            else
                cout << "*";
            j++;
        }
        i++;
        cout << "\n";
    }
    cout << "\n";
    /*

     *
     **
     ***
     ****
    Note:
    Note:
    */
    i = 0;
    j = 0;
    spaces = 5;
    while (i < 5)
    {
        j = 0;
        while (j < spaces - i)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << "\n";
    }
    /*
    tarni
    taarni
    taarni
    taaaarni
    taaaaarni
    */
    i = 0;
    j = 0;
    while (i < 5)
    {
        cout << "t";
        j = 0;
        while (j <= i)
        {
            cout << "a";
            j++;
        }
        i++;
        cout << "rni\n";
    }
    /*
      pyramid
      */
    i = 0;
    j = 0;
    spaces = 4;
    int size = 7;
    while (i < 5)
    {
        j = 0;
        while (j < 7)
        {
            if (j < spaces || j > size - spaces - 1)
                cout << " ";
            else
                cout << "*";
            j++;
        }
        i++;
        spaces--;
        cout << "\n";
    }

    /*
       pyramid
    */
    // i=0;
    //  j=0;
    //  spaces = 4;
    //  while(i<5){
    //      while(j<5){

    //      }
    //  }
}