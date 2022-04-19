#include<bits/stdc++.h>
using namespace std;

vector<pair<pair<int,int> ,int> > v;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int a, b, w;
		cin >> a >> b >> w;
		v.push_back({{a,b},w});
	}
	sort(v.begin(),v.end());
	
	int l=0,r=1e9+1;
	while(l<r)
	{
		int md=l+(r-l)/2, last=1;
		for(auto x:v)
		{
			if(x.second>md) continue;
			if(x.first.first<=last) last=max(x.first.second,last);
		}
		if(last==n) r=md;
		else l=md+1;
	}
	cout << l;
	return 0;
}
