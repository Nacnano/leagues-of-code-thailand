#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    int n, prev, now, next, ans=0;
    cin >> n;
    cin >> prev >> now;
    
    n-=2;
    while(n--)
    {
        cin >> next;
        if(now < next && now < prev) ans++;
        prev=now;
        now=next;
    }
    cout << ans;
}
