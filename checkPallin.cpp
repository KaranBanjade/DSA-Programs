#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string s)
{
    // Write your code here.
    int i = 0;
    int j = s.length()-1;
    string s2;
    for(j;j>=0;j--)
        if(isalnum(s[j]))
        	s2.push_back(tolower(s[j]));
    
    i = 0;
    j = s2.length()-1;
    while(i<j){
        swap(s3[i++],s3[j--]);
    }
    return (s3==s2);
//     return s3;
}
int main(){
    cout<<"Here";
    string s = "Karan";
    cout<<checkPalindrome(s);   
    return 0;
}