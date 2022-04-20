#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, q;
	cin >> n >> q;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		sum+=x;
		v.push_back(sum);
	}
	
	while(q--)
	{
		long long l=0,r=n-1, x;
		cin >> x;
		while(l<r)
		{
			long long md=l+(r-l)/2;
			if(v[md]>=x) r=md;
			else l=md+1;
		}
		cout << l+1 << "\n";
	}
	return 0;
}
