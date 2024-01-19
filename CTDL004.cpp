#include<bits/stdc++.h>
using namespace std;
char a[100];
int n;
void check()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << " ";	
}
void Try(int i)
{
	for(char j='A';j<='B';j++)
	{
		a[i]=j;
		if(i==n) check();
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
}