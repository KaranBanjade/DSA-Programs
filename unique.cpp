#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    for(int i = 0;i<size;i++){
            int temp = arr[i];
            int count = 0;
            for(int j = 0;j<size;j++){
                if(arr[j]==temp){
                    ++count;
                }
            }
        if(count == 0)
			return arr[i];
        }
		return 0;
}
int main(){
	int arr[] = {1,2,1,2,3};
	cout<<findUnique(arr,5);
	return 0;
}