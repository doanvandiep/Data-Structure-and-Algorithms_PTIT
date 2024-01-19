#include<bits/stdc++.h>
using namespace std;
int check(int n,int s,int m)
{
	double sum=s*m;
	if((s-s/7)*n<sum) return -1;
	else return ceil(sum/n);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,s,m;
		cin >> n >> s >> m;
		cout << check(n,s,m) << endl;
	}
}