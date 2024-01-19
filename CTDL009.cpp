#include<bits/stdc++.h>
using namespace std;
void check()
{
	string s;
	cin >> s;
	string res=s;
	for(int i=1;i<s.size();i++)
	{
		if((res[i-1]-'0')^0==(s[i]-'0')) res[i]='0';//XOR với số 0 ra chính số đó
		// vi du:
		/*
		01101
		01101
		res[1]=1=s[2];
		=> res[2]=0 để res[1]^res[2]=0^1=1=s[2];
		*/
		else res[i]='1';
	}
	cout << res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		check();
		if(t>0) cout << endl;
	} 
}