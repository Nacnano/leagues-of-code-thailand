#include<bits/stdc++.h>
using namespace std;
 
bool a[105][105];
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, m, ans=0;
    cin >> n >> m;
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) 
            cin >> a[i][j];
    // nvm, coding in iPad sucks anyway... Also, too lazy to code Prefix sum.
    for(int i=0;i<n-1;i++) 
        for(int j=0;j<m-1;j++)
           if(a[i][j]==a[i+1][j] && a[i+1][j]==a[i+1][j+1] && a[i+1][j+1]==a[i][j+1]) ans=1;
    cout << (ans ? "UNORIGINAL" : "ORIGINAL");
}
