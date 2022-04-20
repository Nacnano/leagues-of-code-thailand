#include<bits/stdc++.h>
using namespace std;

double calc(double x, double a, double b, double c, double d){
	return (double)a*x*x*x+b*x*x+c*x+d;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int cnt=1;
	double a,b,c,d, l=-1e6, r=1e6;
	cin >> a >> b >> c >> d;
	if(a<0)
	{
		a*=-1;
		b*=-1;
		c*=-1;
		d*=-1;
	}
	while(cnt<=90)
	{
		double md=(r+l)/2.0;
		if(calc(md,a,b,c,d)>=0) r=md;
		else l=md;
		cnt++;
	}
	cout << setprecision(30) << l;
	return 0;
}
