#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;


int main(){
	int T; cin >> T;
	while ( T-- ){
		
	    long long val;
	    long long n;
	    priority_queue<long long,vector<long long>,greater<long long>> q;
	    cin >> n;
	    for(int i=0;i<n;i++){
	    	cin >> val;
	    	q.push(val);
	    }
	    long long res=0;
	    while(q.size()>1){
	    	long long  a=q.top();q.pop();
	    	long long  b=q.top();q.pop();
	    	long long tmp=(a+b)%mod;
	    	q.push(tmp);
	    	res+=tmp;
	    	res%=mod;
	    }
	    cout << res << "\n";
	}
	return 0;
}