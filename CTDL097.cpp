#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
-Nếu là toán hạng thì đẩy vào stack, toán tử thì lấy 2 thằng
đầu stack và xóa khỏi stack với toán tử đó đẩy lại vào stack
lúc này toán tử và 2 thằng đầu stack thành 1 phẩn tử trong stack
*/
bool check(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^')
	return 1;
	return 0;
}
void postpre()
{
	string str;
	cin >> str;
	stack<string> s;
	for(int i=0;i<str.size();i++)
	{
		if(check(str[i])==0) s.push(string(1,str[i]));
		else
		{
			string s1=s.top();
			s.pop();
			string s2=s.top();
			s.pop();
			string temp=str[i]+s2+s1;
			s.push(temp);
		}
	}
	cout << s.top() << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		postpre();
	}
}