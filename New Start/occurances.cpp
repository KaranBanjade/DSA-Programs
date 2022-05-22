int findLeft(int arr[], int n, int x){
	int beg = 0;
	int end = n;
	int mid = (beg + end)/2;
	int ans = 0;
	while(beg<=end){
		if(arr[mid] == x){
			ans = mid;
			end = mid - 1;
		}
		else if(arr[mid] < x)
			beg = mid + 1;
		else
			end = mid - 1;
		mid = (end + beg)/2;
	}
	return ans;
}
int findlast(int arr[], int n, int x){
	int beg = 0;
	int end = n;
	int mid = (beg + end)/2;
	int ans = -1;
	while(beg<=end){
		if(arr[mid] == x){
			ans = mid;
			beg = mid + 1;
		}
		else if(arr[mid] < x){
			beg = mid + 1;
		}
		else
			end = mid - 1;
		mid = (end + beg)/2;
	}
	return ans;
}
int countOccurences(int arr[], int n, int X)
{
	int f = findLeft(arr, n, X);
	int l = findlast(arr, n, X);
	return (l-f) + 1;
}