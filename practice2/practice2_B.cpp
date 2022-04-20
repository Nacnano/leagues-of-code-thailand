#include<bits/stdc++.h>
using namespace std;

double L;
vector<double> v;
bool bs(double md)
{
	vector<pair<double,double> > bound;
	for(auto tmp: v) bound.push_back({tmp-md,tmp+md});
	sort(bound.begin(),bound.end());
	
	double last=0;
	for(auto tmp: bound) if(tmp.first<=last) last=max(last,tmp.second);
	return last>=L;
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n, cnt=1;
	cin >> n >> L; 
	while(n--)
	{
		double x;
		cin >> x;
		v.push_back(x);
	}
	
	double l=0, r=1e9;
	while(cnt<=90)
	{
		double md=(r+l)/2.0;
		if(bs(md)) r=md;
		else l=md;
		cnt++;
	}
	cout << setprecision(30) << l;
	return 0;
}
