#include<bits/stdc++.h>
using namespace std;
const int mxn=100005;
vector<int> g[mxn];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++)
	{
		sort(g[i].begin(),g[i].end());
		for(auto v: g[i]) cout << v << " ";
		cout << "\n";
	}
	return 0;
}

