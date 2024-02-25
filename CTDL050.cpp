#include<bits/stdc++.h>
using namespace std;
const int mod=123456789;
#define ll long long

ll check(ll n,ll k)
{
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll temp = check(n,k/2);
	if(k%2 == 0) return temp*temp%mod;
	else return temp*temp%mod*n%mod;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	ll n;
	cin >> n;
	if(n==1) cout << 1 << endl;
	else cout << check(2,n-1) << endl;
	}
}