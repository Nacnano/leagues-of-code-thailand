#include<bits/stdc++.h>
using namespace std;

long long dp[55][55];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=50;i++) dp[i][0]=0, dp[0][i]=0;
	dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1 && j==1) continue;
			dp[i][j]=dp[max(0,i-2)][j-1]+dp[i-1][max(0,j-2)];
		}
	}
	cout << dp[n][m];
	return 0;
}
