#include<bits/stdc++.h>
using namespace std;
 
long long val=0, ans;
map<int, int> mm;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(mm.find(x)==mm.end()) mm[x]=1;
        else mm[x]++;
    }
    for(auto tmp:mm) 
        if(val < (long long)tmp.first*tmp.second)
        {
            val = (long long)tmp.first*tmp.second;
            ans=tmp.first;
        }
    cout << ans;
    // nvm, coding in iPad sucks anyway... 
}
