#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n,x,y;
    cin >> n >> x >> y;
    int ans=4;
    if(x==n || x==1) ans--;
    if(y==n || y==1) ans--;
    cout << ans;
    
}
