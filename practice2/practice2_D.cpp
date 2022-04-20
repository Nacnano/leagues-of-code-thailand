#include<bits/stdc++.h>
using namespace std;

int n, k, mx=0;
vector<int> v;
bool bs(int md)
{
	int cnt=1, sum=0;
	for(auto val: v)
	{
		if(val>md) return 0;
		if(sum+val>md)
		{
			sum=0;
			cnt++;
		}
		sum+=val;
	}
	return cnt<=k;
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
		mx=max(mx,x);
	}
	
	if(k>=n)
	{
		cout << mx;
		return 0;
	}
	
	int l=0, r=1e9+10;
	while(l<r)
	{
		int md=l+(r-l)/2;
		if(bs(md)) r=md;
		else l=md+1;
	}
	cout << l;
	return 0;
}
