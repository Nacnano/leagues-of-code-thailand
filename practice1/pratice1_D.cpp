#include<bits/stdc++.h>
using namespace std;

long long a[50010], s, ans=INT_MIN;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	cin >> s;
	for(int i=1;i<n;i++)
	{
		int l=0,r=i-1;
		while(l<r)
		{
			int md=l+(r-l)/2;
			if(a[md]+a[i]>=s) r=md;
			else l=md+1;
		}
		if(a[i]+a[l]<=s)ans=max(ans,a[i]+a[l]);
		if(l>0 && a[i]+a[--l]<=s)ans=max(ans,a[i]+a[l]);
	}
	cout << ans;
	return 0;
}
