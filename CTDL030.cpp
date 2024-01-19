#include<bits/stdc++.h>
using namespace std;
/*
1- Tim vi tri co phan tu lon nhat sau i
2- Neu vi tri do khac i thi doi cho i voi phan tu lon nhat
*/
void check()
{
	int k;cin >> k;
	string s; cin >> s;
	int n;
	if(k>=s.size())
	{
		n=s.size();
	}else
	{
		n=k;
	}
	for(int i=0;i<n;i++)
	{
		int max=i,j=s.size();
		while(j-->i)
		{
			if(s[j]>s[max]) max=j;
		}
		if(max!=i) swap(s[i],s[max]);
		else k++;
	}
	cout << s << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		check();
	}
}