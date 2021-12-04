#include<iostream>
using namespace std;
int main(){
// Decimal to binary using shift
    cout<<"Decimal to binary using shift\n";
    int input;
    cin>>input;
    int ans = 0;
    int bit;
    int i=1;
    while(input){
        bit = input & 1;
        ans = bit*i + ans;
        input >>= 1;
        i*=10;
    }
    cout<<ans<<endl;
// Decimal to binary Regular way
    cout<<"\nDecimal to binary regular way\n";
    cin>>input;
    ans = 0;
    i = 1;
    while(input){
        bit = input%2;
        ans = bit*i + ans;
        input /= 2;
        i*=10;
    }
    cout<<ans<<endl;
// Binary to Decimal shift way
    cout<<"\nBinary to Decimal shift way\n";
    cin>>input;
    ans = 0;
    i = 0;
    while(input){
        bit=input%10;
        ans+=bit<<i;
        input=input/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}