#include<bits/stdc++.h>
using namespace std;
long long n;
struct work{
	int s,f;
};
work a[1005];
bool cmp(work a,work b)
{
	return a.f<b.f;
}
void check()
{
	cin >> n;
	int res=1,temp=0;
	for(int i=0;i<n;i++) cin >> a[i].s;
	for(int i=0;i<n;i++) cin >> a[i].f;
	sort(a,a+n,cmp);
	for(int i=1;i<n;i++)
	{
		if(a[i].s>=a[temp].f)
		{
			res++;
			temp=i;
		}
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