#include<bits/stdc++.h>
using namespace std;

int dp[1000005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	dp[1]=0;
	for(int i=2;i<=n;i++)
	{
		dp[i]=1e9;
		if(i%3==0) dp[i]=min(dp[i],dp[i/3]+1);
		if(i%2==0) dp[i]=min(dp[i],dp[i/2]+1);
		dp[i]=min(dp[i],dp[i-1]+1); 
	}
	cout << dp[n];
	return 0;
}
