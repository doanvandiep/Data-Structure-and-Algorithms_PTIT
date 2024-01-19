#include<bits/stdc++.h>
using namespace std;
int n;
int a[]={1,2,5,10,20,50,100,200,500,1000};
void check()
{
	cin >> n;
	int res=0;
	for(int i=9;i>=0;i--)
	{
		if(n<=0) break;
		res+=n/a[i];
		n=n%a[i];
	}
	cout << res << endl;
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