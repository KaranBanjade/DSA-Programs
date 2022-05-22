#include<iostream>
#include<string.h>

using namespace std;

string reverseStrings(string str)
{
    // Write your code here.
    int j = str.length()-1;
    int i = j;
    string s;
    for(i,j;i>=0;i--)
    {
        if(str[i]==' '||i==0)
        {
            int temp = i;
            while(temp<=j)
            {
            	s.push_back(str[temp]);
                temp++;
            }
			j=i;
        }
		//cout<<"\n"<<s;
    }
	cout<<"\n";
	for(i = 0;i<s.length();i++){
		if(s[i]==' ')
			cout<<"1";
		else
			cout<<s[i];
	}
    return s;
}
string reverseString(string str)
{
	string ans = "";
	int j  = str.length()-1;
	int i = j;
	for(i,j;i>=0;i--)
	{
		string substrs;
		if(str[i]==' '||i==0){
			substrs = str.substr(i,j-i+1);
			j=i-1;
		}
		ans+=substrs;
	}
	string s = ans;
	cout<<"\n";
	for(i = 0;i<s.length();i++){
		if(s[i]==' ')
			cout<<"1";
		else
			cout<<s[i];
	}
	return ans;
}
int main()
{
	string s = "Karan Is Name";
	cout<<"Input: "<<s;
	cout<<"\nOutput: "<<reverseString(s);
	
	return 0;
}