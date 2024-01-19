#include<bits/stdc++.h>
using namespace std;
/*
1- duyệt ngược tìm vị trí thứ 1 cần trao đổi
2- duyệt ngược tìm vị trí thứ 2 cần tráo đổi
3- sắp xếp mảng tăng dần các số sau vị trí thứ 1
*/
void check()
{
	int n;
	cin >> n;
	int a[n+1],i=n,j=n,check=0;
	for(int i=1;i<=n;i++) cin >> a[i];
	while(a[i]<a[i-1]&&i>0) i--;
	i--;
	if(i<0) for(int i=1;i<=n;i++) cout << i <<" ";
	else
	{
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		sort(a+i+1,a+n+1);
		for(int i=1;i<=n;i++) cout << a[i] <<" ";
	}
	cout << endl;
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