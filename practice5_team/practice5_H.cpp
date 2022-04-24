#include<bits/stdc++.h>
using namespace std;

long long dp[100005], x;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n >> dp[1];
	for(int i=2;i<=n;i++) 
	{
		cin >> x;
		dp[i]=max(dp[i-1]+x,dp[i-2]+2*x);
	}
	cout << dp[n];
}
