#include<bits/stdc++.h>
using namespace std;
const int mxn=200005;

vector<int> g[mxn], tmp;
bool vis[mxn];
long long cnt, sum, ans=0;
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
			sum=0, cnt=0;
			tmp.clear();
			dfs(i);
			for(auto v:tmp) sum+=(long long)g[v].size();
			ans+=cnt*(cnt-1)/2-sum/2;
		}	
	}
	cout << ans;
	return 0;
}

