#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
	for(int i = 0;i<size-1;i+=2){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
}
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9};
swapAlternate(arr,9);
for(int i=0;i<9;i++)
	cout<<arr[i]<<" ";
return 0;
}