#include <iostream>
using namespace std;
int returnOnes(int a)
{
    int bit = 0;
    while (a)
    {
        bit += a & 1;
        a = a >> 1;
    }
    return bit;
}
int main()
{
    int a = 10, b = 16;
    // a = returnOnes(a);
    // b = returnOnes(b);
    // int sumOnes =;
    // sumOnes += ;
    // cout<<a<<"\n"<<b;
    cout << returnOnes(a) + returnOnes(b);
    return 0;
}