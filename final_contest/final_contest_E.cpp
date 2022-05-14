#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5+5;

long long vis[mxn], a[mxn], mn, ans=0;
vector<int> g[mxn];
void dfs(int u)
{
	if(vis[u]) return;
	vis[u]=1;
	mn=min(mn,a[u]);
	for(auto v:g[u]) dfs(v);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	while(m--)
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
			mn=1e18;
			dfs(i);
			ans+=mn;
		}
	}	
	cout << ans;
	return 0;
}
