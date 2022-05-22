#include<iostream.h>
using namespace std;
void BinarySearch(int *a, int last, int first, int item){
int mid = (last + first)/2;
	if(last<first)
		return -1;
	if(item > a[mid])
		BinarySearch(a, last, mid+1,item);
	else if(item < a[mid])
		BinarySearch(a, first, mid - 1, item);
	else
		return mid;
}
void main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<BinarySearch(a,9,0,5);
}