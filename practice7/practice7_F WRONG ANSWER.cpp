#include<bits/stdc++.h>
using namespace std;
const int mxn=2e5+5;

int col[mxn], is_bi=1, cnt[3];
vector<int> g[mxn];
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
	
	for(int i=1;i<=n;i++) col[i]=-1;
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		if(col[i]==-1)
		{
			col[i]=0;
			q.push(i);
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				for(auto v:g[u])
				{
					if(col[v]==-1) col[v]=1-col[u], q.push(v);
					else if(col[v]==col[u]) is_bi=0;
				}
			}
		}
	}
	
	if(!is_bi)
	{
		cout << "-1";
		return 0;
	}
	for(int i=1;i<=n;i++) cnt[col[i]]++;
	cout << cnt[0]*cnt[1]-m;
	return 0;
}
