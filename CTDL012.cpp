#include<bits/stdc++.h>
using namespace std;
 
/*
1)dùng quay lui để liệt kê tất cả các số chứ 2 số 0 và 9 đưa
vào 1 mảng động
2) sắp xếp mảng theo thứ tự tăng dần
3) tìm kiếm đến mảng có số nhỏ nhất %n=0

*/
int n;
vector<long long> res;
void Try( long long i)
{
	if(i>=1e10) return;
	res.push_back(i);
	Try(i*10);
	Try(i*10+9);
}
int main()
{
	int t;
	cin >> t;
	Try(9);
	sort(res.begin(),res.end());
	while(t--)
	{
        cin >> n;
        for(int i=0;i<res.size();i++)
        {
        	if(res[i]%n==0)
        	{
        		cout << res[i];
        		break;
			}
		}
		if(t>0) cout << endl;
	}
}