#include<bits/stdc++.h>
using namespace std;

int dp[100005];
vector<int> powk;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,k;
	cin >> n >>k;
	if(k==1)
	{
		cout << "1";
		return 0;
	}
	
	powk.push_back(1);
	for(int i=2;i<=n;i++)
	{
		int cnt=k-1, mul=i;
		while(cnt--) mul*=i; //too lazy to do that binary number technique LOL, this is going to work anyway...
		if(mul>n) break;
		powk.push_back(mul);
	}
	
	for(int i=1;i<=n;i++) dp[i]=1e9;
	dp[0]=0;
	for(int i=0;i<n;i++) for(auto add:powk) if(i+add<=n) dp[i+add]=min(dp[i+add],dp[i]+1); else break;
	cout << dp[n];
	return 0;
}
