#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int x=0,y=0;
		vector<int> v;
		for(int i=0;i<n;i++)
	    {
	    	int x;
	    	cin >> x;
	    	if(x!=0) v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(i%2==0) x=x*10+v[i];
			else y=y*10+v[i];
		}
		cout << x+y << endl;
	}
}