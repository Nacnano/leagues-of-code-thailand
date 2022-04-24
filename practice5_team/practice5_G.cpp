#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > a;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m, x;
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> x, a.push_back({x,0});
	for(int i=0;i<m;i++) cin >> x, a.push_back({x,1});
	sort(a.begin(), a.end());
	
	int ans=INT_MAX;
	for(int i=0;i<n+m-1;i++) if(a[i].second==0 && a[i+1].second==1 || a[i].second==1 && a[i+1].second==0) ans=min(ans,a[i+1].first-a[i].first);
	cout << ans;
	return 0;
}
