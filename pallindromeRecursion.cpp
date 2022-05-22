#include<iostream>
using namespace std;

bool reverse(int i, int j, string s){
	if(i>j)
		return true;
	if(s[i]==s[j]){
		i++;
		j--;
		reverse(i,j,s);
	}
	else
		return false;
}
int main(){
string s = "KaraK";
if(reverse(0,s.length()-1,s))
	cout<<"Pallindorme";
cout<<s;
return 0;
}