#include<bits/stdc++.h>
using namespace std;
const int mxn=100005;
set<pair<int,int> > ss;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		int u, v;
		cin >> u >> v;
		ss.insert({min(u,v),max(u,v)});
	}
	if(ss.size()==n*(n-1)/2) cout << "YES";
	else cout << "NO";
	return 0;
}

