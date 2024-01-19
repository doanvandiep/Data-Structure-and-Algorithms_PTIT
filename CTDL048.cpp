#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int tu,mau;
		cin >> tu >> mau;
		int res;
		while(1)
		{
			if(mau%tu==0)
			{
				cout << "1/" << mau/tu << endl;
				break;
			}
			else
			{
				res=mau/tu+1;
				cout << "1/" << res << " + ";
				tu=tu*res-mau;
				mau=mau*res;
			}
		}
	}
}