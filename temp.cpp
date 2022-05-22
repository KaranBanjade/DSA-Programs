#include<iostream>
using namespace std;
int main()
{   
    int arr[] = {1,2,2,2,2,2,3,4,5,6};
    int n = 10; 
    int key = 2;
    int ans = -1;
	int start = 0;
    int end = n-1;
    while(start<=end){
        int mid =  start + (end - start) / 2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }
    cout<<ans;
    ans = -1;
	start = 0;
    end = n-1;
    while(start<=end){
        int mid =  start + (end - start) / 2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}