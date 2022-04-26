#include<bits/stdc++.h>
using namespace std;
const int mxn=200005;

vector<int> g[mxn];
bool vis[mxn];
void dfs(int u)
{
	if(vis[u]) return;
	vis[u]=1;
	for(auto v:g[u]) dfs(v);	
	return;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	while(m--)
	{
		int u, v;
		cin >> u >> v;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	dfs(a);
	if(vis[b]) cout << "YES";
	else cout << "NO";
	return 0;
}

