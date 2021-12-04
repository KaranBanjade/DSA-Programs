#include<iostream>
using namespace std;
int main() 
{
    int n = 5;
    if (n == 0) return 1;
    if (n == 1) return 0;
    int bit = 1;
    while (bit <= n){
            bit <<= 1;
            }
    n = n ^ (bit - 1);
    cout<<n;
    return 0;
}