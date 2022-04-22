#include<bits/stdc++.h>
using namespace std;

const long long p=1e9+7;
long long dp[505][505];
string s[505];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> s[i];
	dp[1][1]=1;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) if(s[i][j-1]=='.' && !(i==1 && j==1)) dp[i][j]=dp[i-1][j]+dp[i][j-1], dp[i][j]%=p;
	cout << dp[n][m];
}
