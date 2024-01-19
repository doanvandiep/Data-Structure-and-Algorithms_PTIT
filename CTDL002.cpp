#include<bits/stdc++.h>
using namespace std;
void Try(string s,int i)
{
	if(i==s.size())
	{
		cout << s << endl;
		return;
	}
	if(s[i]=='?')
	{
		s[i]='0';
		Try(s,i+1);
		s[i]='1';
		Try(s,i+1);
	}else
	{
		Try(s,i+1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		Try(s,0);
	}
}