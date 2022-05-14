#include<bits/stdc++.h>
using namespace std;
const int mxn=2e5+5;

int col[mxn], p[mxn], st , ed;
vector<int> g[mxn];
bool dfs(int u)
{
	col[u]=1;
	for(auto v:g[u])
	{
		if(col[v]==0)
		{
			p[v]=u;
			if(dfs(v)) return 1;
		}
		else if(col[v]==1)
		{
			ed=u;
			st=v;
			return 1;
		}
	}
	col[u]=2;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		while(m--)
		{
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
		}
		
		st=-1;
		for(int i=1;i<=mxn;i++) col[i]=0, p[i]=-1;
		
		for(int i=1;i<=n;i++) if(col[i]==0 && dfs(i)) break;
		
		if(st==-1) cout << "YES" << "\n";
		else
		{
			vector<int> ans;
			ans.push_back(st);
			for(int v=ed;v!=st;v=p[v]) ans.push_back(v);
			ans.push_back(st);
			reverse(ans.begin(),ans.end());
			
			cout << "NO\n" << (int)ans.size()-1 << "\n";
			for(auto v: ans) cout << v << " ";
			cout << "\n";
		}
		for(int i=1;i<=n;i++) g[i].clear();
	}
	return 0;
}
