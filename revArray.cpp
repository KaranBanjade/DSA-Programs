#include <iostream>
using namespace std;
int main()
{
	int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0, j = 8; i < 5; i++, j--)
	{
		int temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
	for (int i = 0; i < 9; i++)
		cout << ar[i] << " ";
	return 0;
}