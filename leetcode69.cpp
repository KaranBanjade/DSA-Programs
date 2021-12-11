#include <iostream>
using namespace std;
int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid * mid == x)
            return mid;
        if (mid * mid > x)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return e;
}
double getPrectision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor = factor /10;
        for(double j = ans;j*j<n;j = j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n = 37;
    int tempSol = mySqrt(n);
    double t = getPrectision(n,3,tempSol);
    cout<<t;
    return 0;
}