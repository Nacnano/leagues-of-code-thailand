#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
    int xa, xb, xc, ya, yb, yc, ans;
    cin >> xa >> ya >> xb >> yb >> xc >> yc; 
    
    ans=abs(xa-xb)+abs(ya-yb);
    if(xa==xb && xb==xc)
    {
    	if(ya>yc && yc>yb) ans+=2;
    	if(yb>yc && yc>ya) ans+=2;
	}
	else if(ya==yb && yb==yc)
	{
		if(xa>xc && xc>xb) ans+=2;
		if(xb>xc && xc>xa) ans+=2;
	}
	cout << ans;
	return 0;
}
