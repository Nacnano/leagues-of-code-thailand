#include<bits/stdc++.h>
using namespace std;

const long long p=1e9+7;
long long dp[4][100005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	dp[0][1]=1, dp[1][1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[0][i]+=dp[0][i-1]+dp[1][i-1]+dp[2][i-1];
		dp[1][i]+=dp[0][i-1];
		dp[2][i]+=dp[1][i-1];
		dp[0][i]%=p, dp[1][i]%=p, dp[2][i]%=p;
	}
	cout << (dp[0][n]+dp[1][n]+dp[2][n])%p;
}
