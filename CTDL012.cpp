#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
/*
1)dùng quay lui để liệt kê tất cả các số chứ 2 số 0 và 9 đưa
vào 1 mảng động
2) sắp xếp mảng theo thứ tự tăng dần
3) tìm kiếm đến mảng có số nhỏ nhất %n=0
*/
int n;
std::vector<ll> res;

void Try(ll i)
{
	if(i>=1e10) return;
	res.push_back(i);
	Try(i*10);
	Try(i*10+9);
}

int main()
{
	int t;
	std::cin >> t;
	Try(9);
	std::sort(res.begin(),res.end());
	while(t--)
	{
		std::cin >> n;
		for(int i=0;i<res.size();i++)
		{
			if(res[i]%n==0)
			{
				std::cout << res[i] << std::endl;
				break;
			}
		}
	}
}
