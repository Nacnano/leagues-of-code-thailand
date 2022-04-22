#include<bits/stdc++.h>
using namespace std;

const long long p=1e9+7;
long long dp[1000005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	dp[1]=1, dp[2]=2;
	for(int i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]%=p;
	}
	cout << dp[n];
}
