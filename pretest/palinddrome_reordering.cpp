#include<bits/stdc++.h>
using namespace std;

set<int> ss;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    for(int i=0;s[i];i++)
    {
        if(ss.find(s[i])==ss.end()) ss.insert(s[i]);
        else ss.erase(s[i]);
    }
    
    cout << (ss.size()>1 ? "NO" : "YES");
    // coding in iPad without C++ IDE sucks. I hate compiling codes in just my mind.
    // bugs are everywhere lol...
}
