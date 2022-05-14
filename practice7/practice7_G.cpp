#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5+5;

int col[mxn], vis[mxn], st, val[mxn];
vector<int> g[mxn], g2[mxn];

bool dfs_cycle(int u)
{
	col[u]=1;
	for(auto v:g[u])
	{
		if(col[v]==0)
		{
			if(dfs_cycle(v)) return 1;
		}
		else if(col[v]==1)
		{
			st=v;
			return 1;
		}
	}
	col[u]=2;
	return 0;
}

void dfs(int u, int lv)
{
	if(vis[u]) return;
	vis[u]=1;
	val[u]=lv;
	for(auto v:g[u]) dfs(v,lv+1);
}

void dfs2(int u, int lv)
{
	if(vis[u]) return;
	vis[u]=1;
	val[u]=lv;
	for(auto v:g2[u]) dfs2(v,lv-1);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g2[v].push_back(u);
	}
	
	st=-1;
	for(int i=0;i<n;i++) col[i]=0, val[i]=1;
	for(int i=0;i<n;i++) if(col[i]==0 && dfs_cycle(i)) break;
	
	if(st==-1)
	{
		cout << "YES\n";
		for(int i=0;i<n;i++) dfs(i,5e8), dfs2(i,5e8);
		for(int i=0;i<n;i++) cout << val[i] << " ";
	}
	else cout << "NO";
	return 0;
}
