#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		string a,b;
		cin >> k >> a>> b;
		while(a.size()<b.size()) a="0"+a;
		while(b.size()<a.size()) b="0"+b;
		int len=a.size();
		int nho=0;
		string res="";
		for(int i=len-1;i>=0;i--)
		{
			int so=a[i]-'0'+b[i]-'0'+nho;
			res=char(so%k+'0')+res;
			nho=so/k;
		}
		if(nho>0) res=char(nho+'0')+res;
		cout << res << endl;
	}
}