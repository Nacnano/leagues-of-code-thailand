#include<bits/stdc++.h>
using namespace std;
const int mxn=2e5+105;

long long dp[mxn], h[mxn];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, k;
	cin >> n >> k;
	for(int i=1;i<=n;i++) cin >> h[i], dp[i]=1e18;
	dp[1]=0;
	for(int i=1;i<=n;i++) for(int j=1;j<=k && i+j<=n;j++) dp[i+j]=min(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
	cout << dp[n];
	return 0;
}
