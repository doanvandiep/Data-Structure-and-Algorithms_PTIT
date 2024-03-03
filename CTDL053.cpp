#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
void trungTam(ll n)
{
	int t=0;
	ll mu=1;
	
	while(n/2>0)
	{
		t++;
		if(t==1)
		{
			a.push_back(2);
			mu=2;
		}else
		{
			mu*=2;
			a.push_back(mu);
		}
		n/=2;
	}
}
ll Val(ll k ,ll n, ll pos)
{
	if(k%2==1) return 1;
	if(k<a[pos]) Val(k,n/2,pos-1);
	else if(k==a[pos]) return n%2;
	else if (k>a[pos]) Val(2*a[pos]-k,n/2,pos-1);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n,l,r,res=0;
		a.clear();
		cin >> n >> l >> r;
		trungTam(n);
		for(ll i=l;i<=r;i++)
		{
			res+=Val(i,n,a.size()-1);
		}
		cout << res << endl;
	}
}