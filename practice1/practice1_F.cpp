/*
	Yeah, I DID misunderstand the problem...
*/

#include<bits/stdc++.h>
using namespace std;

long long a[100005];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	long long n, k, asum=0;
	cin >> n >> k;
	for(int i=0;i<n;i++) cin >> a[i], asum+=a[i];
	if(k>asum)
	{
		cout << 0;
		return 0;
	}
	
	long long l=0, r=1e9+10;
	while(l<r)
	{
		long long md=l+(r-l)/2, sum=0;
		for(int i=0;i<n;i++) sum+=a[i]/md;
		if(sum<k) r=md;
		else l=md+1;
	}
	cout << --l;
	return 0;
}
