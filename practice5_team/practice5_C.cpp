#include<bits/stdc++.h>
using namespace std;
const long long p=1e9+7;

long long dp[5][200005];
int n;
string s, tar="2022";
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> s;
	for(int i=0;i<=n;i++) dp[0][i]=1;
	for(int i=1;i<=4;i++) dp[i][0]=0;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dp[i][j]=dp[i][j-1];
			if(tar[i-1]==s[j-1]) dp[i][j]+=dp[i-1][j-1];
			dp[i][j]%=p;
		}
	}
	cout << dp[4][n];
	return 0;
}
