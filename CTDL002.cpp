#include<iostream>

void Try(int i,std::string s)
{
	if(i==s.size())
	{
		std::cout << s << std::endl;
		return ;
	}
	if(s[i]=='?')
	{
		s[i]='0';
		Try(i+1,s);
		s[i]='1';
		Try(i+1,s);
	}else
	{
		Try(i+1,s);
	}
}
int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		Try(0,s);
	}
}
