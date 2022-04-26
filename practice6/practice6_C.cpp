#include<bits/stdc++.h>
using namespace std;
const int mxn=1005;
int mat[mxn][mxn];
int ver[mxn],hor[mxn];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) 
		for(int j=1;j<=n;j++) 
			cin >> mat[i][j], ver[j]+=mat[i][j], hor[i]+=mat[i][j];
	for(int i=1;i<=n;i++) if(!ver[i]) cout << i << " ";
	cout << "\n";
	for(int i=1;i<=n;i++) if(!hor[i]) cout << i << " ";
	return 0;
}

