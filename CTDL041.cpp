#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],V,E;
void check()
{
	memset(a,0,sizeof(a));
	cin >> V >> E;
	for(int i=0;i<E;i++)
	{
		int x,y;
		cin >> x >> y;
		a[x][y]=a[y][x]=1;
	}
	for(int i=1;i<=V;i++)
	{
		cout << "D" << i <<": ";
		for(int j=1;j<=V;j++)
		{
			if(a[i][j]==1) cout <<j <<" ";
		}
		cout << endl;
	}
}
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		check();
	}
}