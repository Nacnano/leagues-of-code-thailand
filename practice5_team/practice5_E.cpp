#include<bits/stdc++.h>
using namespace std;

map<long long, int> mm;
long long sum=0;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	mm[0]=0;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin >> x;
		sum+=x;
		if(mm.find(sum)==mm.end()) mm[sum]=i;
		else
		{
			cout << "YES\n" << mm[sum]+1 << " " << i;
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
