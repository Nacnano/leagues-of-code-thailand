#include<bits/stdc++.h>
using namespace std;

long long dp[505][505];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=500;i++) dp[i][0]=-1e18, dp[0][i]=-1e18;
	dp[1][0]=0, dp[0][1]=0;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
	{
		long long x;
		cin >> x; 
		dp[i][j]=max(dp[i-1][j]+x,dp[i][j-1]+x);
	}
	cout << dp[n][m];
	return 0;
}
