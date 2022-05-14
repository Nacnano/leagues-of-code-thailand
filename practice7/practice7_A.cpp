#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5+5;

vector<int> g[mxn];
bool vis[mxn], istree=1;
void dfs(int u)
{
	if(vis[u]) return;
	vis[u]=1;
	for(auto v:g[u]) dfs(v);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	if(n-1==m)
	{
		dfs(1);
		for(int i=1;i<=n;i++) if(!vis[i]) istree=0;
		if(istree) cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
}
