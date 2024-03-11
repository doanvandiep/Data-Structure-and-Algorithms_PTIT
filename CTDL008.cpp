/*
-in ra phần tử ở đầu tiên
-sử dụng toán tử XOR cho 2 phần tử kề nhau kể từ phần tử thứ 2
*/
#include<iostream>

void check(std::string s)
{
	std::cout << s[0];
	for(int i=1;i<s.size();i++)
	{
		int res=(s[i]-'0')^(s[i-1]-'0');
		std::cout << res;
	}
	std::cout << std::endl;
}
int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		check(s);	
	}
}
