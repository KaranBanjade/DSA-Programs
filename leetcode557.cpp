#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "karan is my name";
    int space = 0;
    for (int i = 0; i < s.length()+1; i++)
    {
        if (s[i] == ' '||s[i] == '\0')
        {
            cout<<i<<endl;
            for (int j = space, k = i-1; j < k; j++, k--)
            {
                char temp = s[j];
                s[j] = s[k];
                s[k] = temp;
            }
            space = i+1;
        }
    }
    cout<<s;
    return 0;
}