#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;
bool bs(int md)
{
	int cnt=0, last=-1e9;
	for(auto pos: v)
	{
		if(pos-last>=md)
		{
			cnt++;
			last=pos;
		}
	}
	return cnt<k;
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	int l=0, r=1e9;
	while(l<r)
	{
		int md=l+(r-l)/2;
		if(bs(md)) r=md;
		else l=md+1;
	}
	cout << l-1;
	return 0;
}
