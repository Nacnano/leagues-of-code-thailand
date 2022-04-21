#include<bits/stdc++.h>
using namespace std;
const long long p=1e9+7;

long long dp[1000005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	dp[0]=1, dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=6;j++) if(i-j>=0) dp[i]+=dp[i-j];
		dp[i]%=p;
	}
	cout << dp[n];
	return 0;
}
