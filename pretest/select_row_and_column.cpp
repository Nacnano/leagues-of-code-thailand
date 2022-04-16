#include<bits/stdc++.h>
using namespace std;
 
int a[55][55], ver[55], hor[55];
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, m, ans=0;
    cin >> n >> m;
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) 
            cin >> a[i][j], hor[i]+=a[i][j], ver[j]+=a[i][j];
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) 
           ans=max(ans,hor[i]+ver[j]-a[i][j]);
    cout << ans;
    // nvm, coding in iPad sucks anyway... 
}
