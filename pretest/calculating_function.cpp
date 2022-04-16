#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    long long n;
    cin >> n;
    cout << (n%2 ? -1*(long long)n/2-1 : (long long)n/2);
}
