#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll n,k;
struct matrix{
	ll pos[15][15];
};
matrix nhan(matrix a,matrix b)
{
	matrix temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.pos[i][j]=0;
			for(int k=0;k<n;k++)
			{
				temp.pos[i][j]=(temp.pos[i][j]%mod+a.pos[i][k]*b.pos[k][j]%mod)%mod;
			}
		}
	}
	return temp;
}
matrix power(matrix a,ll k)
{
	if(k==1) return a;
	if(k%2==0) return power(nhan(a,a),k/2);
	else return nhan(a,power(nhan(a,a),k/2));
}
void check()
{
	cin >> n >> k;
	matrix a;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) cin >> a.pos[i][j];
		matrix b=power(a,k);
		ll res=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i+j==n-1) res=(res%mod+b.pos[i][j]%mod)%mod;
			}
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