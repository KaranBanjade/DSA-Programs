#include<iostream>
using namespace std;

void sort(int *arr, int n){
if(n==0||n==1)
	return;
for(int i=0;i<n-1;i++)
	if(arr[i] > arr[i+1])
		swap(arr[i],arr[i+1]);

sort(arr,n-1);
}

int main(){
int arr[] = {9,8,7,6,5,4,3,2,1,0};
sort(arr,10);
for(int i=0;i<10;i++)
	cout<<arr[i];
}
