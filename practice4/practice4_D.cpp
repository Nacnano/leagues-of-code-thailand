#include<bits/stdc++.h>
using namespace std;

long long dp[1005], a[1005][1005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) cin >> a[i][j];
		dp[i]=1e18;
	}
	dp[1]=0;
	for(int i=1;i<=n;i++) for(int j=1;j<i;j++) dp[i]=min(dp[i],dp[j]+a[j][i]);
	cout << dp[n];
}
