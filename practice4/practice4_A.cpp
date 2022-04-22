#include<bits/stdc++.h>
using namespace std;

const long long p=1e9+7;
long long dp[1005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, k;
	cin >> n >> k;
	dp[1]=1;
	for(int i=1;i<=n;i++) for(int j=max(1,i-k);j<i;j++) dp[i]+=dp[j],dp[i]%=p;
	cout << dp[n];
}
