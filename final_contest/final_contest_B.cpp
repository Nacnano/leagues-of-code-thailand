#include<bits/stdc++.h>
using namespace std;
	
int n, m, cnt=60;
pair<double ,double> dis[105], tow[105];
double x, y;

double calc(double x1, double y1, double x2, double y2)
{
	return (double)(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}


bool chk(double r)
{
	for(int i=0;i<n;i++)
	{
		bool hit=0;
		for(int j=0;j<m;j++)
		{
			if(calc(dis[i].first,dis[i].second,tow[j].first,tow[j].second) <= r*r) hit=1 ;
		}
		if(hit==0) return 0;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	cin >> n;
	for(int i=0;i<n;i++) cin >> x >> y, dis[i]={x,y};
	cin >> m;
	for(int i=0;i<m;i++) cin >> x >> y, tow[i]={x,y};
	
	double lo=0, hi=1e5;
	while(cnt--)
	{
		double md=(lo+hi)/2.0;
		if(chk(md)) hi=md;
		else lo=md;
	}
	cout << setprecision(60) << lo;
	return 0;
}
