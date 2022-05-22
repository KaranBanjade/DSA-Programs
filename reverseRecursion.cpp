#include<iostream>
using namespace std;

void reverse(int i, int j, string& s){
	if(i>j)
		return;
	swap(s[i],s[j]);
	i++;
	j--;
	reverse(i,j,s);
}
int main(){
string s = "Karan";
reverse(0,s.length()-1,s);
cout<<s;
return 0;
}