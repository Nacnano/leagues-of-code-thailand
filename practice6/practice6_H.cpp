#include<bits/stdc++.h>
using namespace std;
const int mxn=200005;

vector<int> g[mxn], tmp;
bool vis[mxn];
int cnt, ans[mxn];
void dfs(int u)
{
	if(vis[u]) return;
	tmp.push_back(u);
	cnt++;
	vis[u]=1;
	for(auto v:g[u]) dfs(v);	
	return;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int u, v;
		cin >> u >> v;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			tmp.clear();
			cnt=0;
			dfs(i);
			for(auto v:tmp) ans[v]=cnt;
		}
	}
	for(int i=1;i<=n;i++) cout << ans[i] << " ";
	return 0;
}

