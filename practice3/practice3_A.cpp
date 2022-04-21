#include<bits/stdc++.h>
using namespace std;

long long fuckabs(long long a, long long b)
{
	if(a>b) return a-b;
	else return b-a;
}

long long dp[100005], a[100005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n >> a[1];
	for(int i=1;i<=n;i++) dp[i]=1e18;
	dp[1]=0;
	for(int i=2;i<=n;i++)
	{
		cin >> a[i];
		if(i==2) 
		{
			dp[i]=fuckabs(a[i],a[i-1]);
			continue;
			//damn, stupid mistake lol
		}
		dp[i]=min(dp[i-2]+3*fuckabs(a[i],a[i-2]),dp[i-1]+fuckabs(a[i],a[i-1]));
	}
	cout << dp[n];
	return 0;
}
