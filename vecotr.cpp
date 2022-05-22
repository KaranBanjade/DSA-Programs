#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> temp;
    int i = 0;
    int j = 0;
    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j]){
        	temp.push_back(arr1[i]);   
        	i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
		else
            j++;
    }
    return temp;
}

int main(){
vector<int> arr1 = {1,2,2,2,3,4};
vector<int> arr2 = {2,2,3,3};
vector<int> temp = findArrayIntersection(arr1,6,arr2,4);
for(int i = 0;i<m;i++)
	{
		cout<<temp[i]<<" ";
	}
	return 0;
}