#include<bits/stdc++.h>
using namespace std;
const int mxn=2e5+5;

int deg[mxn], n, ans=0;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i=0;i<n-1;i++)
	{
		int u, v;
		cin >> u >> v;
		deg[u]++;
		deg[v]++;
	}
	for(int i=1;i<=n;i++) if(deg[i]==1) ans++;
	cout << ans << "\n";;
	for(int i=1;i<=n;i++) if(deg[i]==1) cout << i << " ";
	return 0;
}
