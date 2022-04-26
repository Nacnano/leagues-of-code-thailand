#include<bits/stdc++.h>
using namespace std;
const int mxn=1005;

string s[mxn];
vector<pair<int,int> > tmp;
bool vis[mxn][mxn];
int n, m, cnt, ans[mxn][mxn], d[5][3]={{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int x, int y)
{
	if(x<0 || y<0 || y>=n || x>=m) return;
	if(vis[y][x] || s[y][x]=='#') return;
	
	if(s[y][x]=='T') cnt++;
	tmp.push_back({x,y});
	vis[y][x]=1;
	for(int i=0;i<4;i++) dfs(x+d[i][0],y+d[i][1]);
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> s[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[i][j] && s[i][j]!='#')
			{
				tmp.clear();
				cnt=0;
				dfs(j,i);
				for(auto pos:tmp) ans[pos.second][pos.first]=cnt;
			}
		}		
	}
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(s[i][j]=='H') cout << ans[i][j] << " ";
	return 0;
}
