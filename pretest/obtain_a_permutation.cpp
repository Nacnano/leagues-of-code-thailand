#include<bits/stdc++.h>
using namespace std;
 
long long a[100005], ans=0;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) ans+=abs(a[i]-i-1);
    cout << ans;
    // nvm, coding in iPad sucks anyway... 
}
