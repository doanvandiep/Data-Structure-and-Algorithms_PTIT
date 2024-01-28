#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> check(vector<int> &v)
{
	vector<vector<int>> result;
	result.push_back(v);
	vector<int> result1=v;
	while(result1.size()>1)
	{
		vector<int> result2;
		for(int i=0;i<result1.size()-1;i++)
		{
			result2.push_back(result1[i]+result1[i+1]);
		}
		result.push_back(result2);
		result1=result2;
	}
	return result;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin >> v[i];
		}
		vector<vector<int>> result=check(v);
		reverse(result.begin(),result.end());
		for(const auto &row:result)
		{
			cout <<"[";
			for(int i=0;i<row.size();i++)
			{
			    cout << row[i];
			    if(i!=row.size()-1) cout <<" ";
			}
			cout <<"]";
			cout << endl;
		}
	}
}