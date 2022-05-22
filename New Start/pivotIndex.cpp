/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void pivotIndex(int* nums, int size) {
        
        int beg = 0;
        int end = size-1;
        int mid = (beg+end)/2;
        while(end>beg){
            if(nums[mid]>=nums[0] )
                beg = mid + 1;
            else
                end = mid;
            mid = (beg+end)/2;
        }
        cout<<end;
    }
int main()
{
    int a[] = {5,6,7,8,9,10, 1,2,3,4};
    pivotIndex(a,10);
    return 0;
}
