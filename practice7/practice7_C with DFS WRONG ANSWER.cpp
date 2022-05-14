#include<bits/stdc++.h>
using namespace std;
const int mxn=505;

bool vis[mxn];
vector<int> g[mxn], ans;
int mat[mxn][mxn], n, a, b;
void dfs(int u)
{
	
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++) 
		for(int j=1;j<=n;j++) 
		{
			cin >> mat[i][j];
			if(mat[i][j]==1) g[i].push_back(j);
		}
	for(int i=1;i<=n;i++) sort(g[i].begin(),g[i].end());
	dfs()
	for(int i=1;i<=n;i++)
	{
		
	}
	return 0;
}
