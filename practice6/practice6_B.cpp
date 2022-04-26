#include<bits/stdc++.h>
using namespace std;
const int mxn=1005;
int mat[mxn][mxn];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, direct=0;
	cin >> n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> mat[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if(mat[i][j]!=mat[j][i]) direct=1;
	if(direct) cout << "YES";
	else cout << "NO";
	return 0;
}

