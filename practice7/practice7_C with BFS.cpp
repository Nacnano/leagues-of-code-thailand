#include<bits/stdc++.h>
using namespace std;
const int mxn=505;

bool vis[mxn];
vector<int> g[mxn], ans;
int mat[mxn][mxn], n, a, b;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++) 
		for(int j=1;j<=n;j++) 
		{
			cin >> mat[i][j];
			if(mat[i][j]==1) g[i].push_back(j);
		}
	priority_queue<int, vector<int>, greater<int> > pq;
	vis[a]=1;
	pq.push(a);
	while(!pq.empty())
	{
		int u=pq.top();
		pq.pop();
		
		ans.push_back(u);
		if(u==b) break;
		for(auto v:g[u])
		{
			if(!vis[v])
			{
				pq.push(v);
				vis[v]=1;
			}
		}
	}
	if(ans[(int)ans.size()-1]==b)
	{
		cout << (int)ans.size()-1 << "\n";
		for(auto x:ans) cout << x << " ";
	}
	else cout << -1;
	return 0;
}
