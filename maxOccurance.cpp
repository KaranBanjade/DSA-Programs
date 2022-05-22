#include<bits/stdc++.h>
using namespace std;

void showPairVector(vector<pair<char,int> > v)
{
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<"\t:\t"<<v[i].second<<"\n";
	}
}
bool isThere(vector<pair<char,int> > v,char c)
{
	int s = v.size();
		for(int i=0;i<s;i++)
		{
			if(v[i].first == c)
				return true;
		}
		return false;
}
pair<char,int> returnMax(string s, int length)
{
	vector<pair<char,int> > v;
	pair<char,int> p;
	p.second = 0;
	for(int i=0;i<length;i++)
	{	
		if(isThere(v,s[i]))
			continue;
		pair<char,int> pTemp;
		pTemp.first = s[i];
		pTemp.second = 0;
		for(int j = i;j<length;j++)
		{
			if(s[i]==s[j])
				pTemp.second++;
		}
		v.push_back(pTemp);
		if(pTemp.second>p.second)
			p = pTemp;
	}
	showPairVector(v);
	return p;
}
int main()
{
	
	string s = "Karan";
	pair<char, int> store;
	store = returnMax(s,s.length());
	cout<<"\nFrequency: "<<store.second;
	cout<<"\nCharacter: "<<store.first;
	return 0;
} 