#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5+5;

long long dp[4][mxn], val[4][mxn];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) for(int j=0;j<3;j++) cin >> val[j][i];
	for(int j=0;j<3;j++) dp[j][1]=val[j][1];
	
	for(int i=1;i<=n;i++)
		for(int j=0;j<3;j++)
			for(int k=0;k<3;k++)
				if(j!=k) dp[k][i]=max(dp[j][i-1]+val[k][i],dp[k][i]);
				
	cout << max(dp[0][n], max(dp[1][n], dp[2][n]));
	return 0;
}
