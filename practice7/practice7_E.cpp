#include<bits/stdc++.h>
using namespace std;
const int mxn=2e5+5;

long long vis[mxn], a[mxn], cnt, ans=0;
vector<int> g[mxn];
void dfs(int u)
{
	if(vis[u]) return;
	vis[u]=1;
	cnt++;
	for(auto v:g[u]) dfs(v);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			cnt=0;
			dfs(i);
			ans=max(ans,cnt);
		}
	}	
	cout << ans;
	return 0;
}
