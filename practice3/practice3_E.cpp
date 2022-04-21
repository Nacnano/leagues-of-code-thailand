#include<bits/stdc++.h>
using namespace std;

int n, m;
long long dp[115][115];
void add(int i, int j)
{
	if(i<1 || i>n || j<1 || j>m) return;
	dp[i+1][j+2]+=dp[i][j];
	dp[i+2][j+1]+=dp[i][j];
	if(i-1>=1) dp[i-1][j+2]+=dp[i][j];
	if(j-1>=1) dp[i+2][j-1]+=dp[i][j];
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	dp[1][1]=1;
	for(int i=1;i<=2*50;i++) for(int j=1;j<i;j++) add(i-j,j);	
	cout << dp[n][m];
	return 0;
}
