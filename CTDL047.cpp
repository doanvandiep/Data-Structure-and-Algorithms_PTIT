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
		int ok=0;
		int so4,so7;
		for(int i=n/7;i>=0;i--)
		{
			if((n-i*7)%4==0)
			{
				so7=i;
				so4=(n-i*7)/4;
				ok=1;
				break;
			}
		}
		if(ok==1)
		{
			for(int i=1;i<=so4;i++) cout <<"4";
			for(int i=1;i<=so7;i++) cout <<"7";
		}else
		{
			cout << "-1" << endl;
		}
		cout << endl;
	}
}