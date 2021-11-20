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
    cout << "3.++++++++++\n";
    /*
   1
   22
   333
   4444
*/
    i = 1;
    while (i < 5)
    {
        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        i++;
        cout << "\n";
    }
    cout << "4.++++++++++\n";
/*
   1
   23
   456
   78910
*/
    i = 1;
    int count = 1;
    while (i < 5)
    {
        j = 1;
        while (j <= i)
        {
            cout << count++;
            j++;
        }
        i++;
        cout << "\n";
    }

/*
    1
    23
    345
    4567
    56789
*/
    cout << "5.++++++++++\n";
    i = 1;
    while (i < 6)
    {
        j = 0;
        while (j < i)
        {
            cout << i + j;
            j++;
        }
        cout << "\n";
        i++;
    }
    /*
    1
    21
    321
    4321
    54321
*/
    cout << "6.++++++++++\n";
    i=1;
    while(i<6){
        j=0;
        while (j<i)
        {
           cout<<i-j;
           j++;
        }
        i++;
        cout<<"\n";
    }
/*
    AAAAA
    BBBBB
    CCCCC
    DDDDD
    EEEEE
*/
    cout << "7.++++++++++\n";
    char c = 'A';
    char d;
    char e = 'A'+ 5;
    while(c<e){
        d = 'A';
        while(d < e){
            cout<<c;
            d++;
        }
        cout<<"\n";
        c++;
    }

return 0;
}