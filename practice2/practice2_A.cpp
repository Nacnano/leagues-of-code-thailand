#include<bits/stdc++.h>
using namespace std;

double calc(double x){
	return (double)42*x*x*x+13*x*x+1337*x;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int cnt=1;
	double c, l=0, r=287685;
	cin >> c;
	while(cnt<=60)
	{
		double md=(r+l)/2.0;
		if(calc(md)>=c) r=md;
		else l=md;
		cnt++;
	}
	cout << setprecision(30) << l;
	return 0;
}
