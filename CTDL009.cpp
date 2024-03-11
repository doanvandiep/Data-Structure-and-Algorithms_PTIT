#include<iostream>

/*
step1:
s = 01101
     |
res= 01101

0!=1 => res[1]=1;
step2:
s = 01101
      |
res= 01101
1=1 => res[2]=0;
step3:
s = 01101
       |
res= 01001
0=0 => res[3]=0;
step4;
s = 01101
        |
res= 01001
1!=0 => res[4]=1;
*/

void check(std::string s)
{
	std::string res=s;
	for(int i=1;i<s.size();i++)
	{
		if((res[i-1]-'0')^0==(s[i]-'0')) res[i]='0';
		else res[i]='1';
	}
	std::cout << res << std::endl;
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
