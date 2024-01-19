#include<bits/stdc++.h>
using namespace std;
int n,k,a[16];
void check()
{
	for(int i=1;i<=k;i++) cout << a[i]; cout <<" ";
}
void Try(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k) check();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}