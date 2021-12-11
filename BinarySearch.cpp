#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    // int mid = start + (end-start) / 2;

    while(start <= end){
        int mid = start + (end-start) / 2;
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {1,3,5,11,14};

    int evenIndex = binarySearch(odd,5,14);
    cout<<evenIndex;
    return 0;
}