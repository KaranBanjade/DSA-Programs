/*#include<iostream>
using namespace std;
int main(){
char c;
cin>>c;
if(c>96&&c<123)
	cout<<"a-z";
else if(c>64&&c<91)
	cout<<"A-Z";
else if(c>47&&c<57)
	cout<<"Number";
else
	cout<<"Nashe";
	return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	int i = 2;
	cin >> n;
	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	cout << sum;
	return 0;
}