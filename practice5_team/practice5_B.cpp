#include<bits/stdc++.h>
using namespace std;

int n, first=0, second=-1;
string s;
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> s;
	for(int i=1;i<n;i++)
		if(s[i]!=s[first])
		{
			second=i;
			break;
		}
		
	if(second==-1) cout << "NO";
	else 
	{
		cout << "YES\n";
		for(int i=0;i<n;i++)
		{
			if(i==first) cout << s[second];
			else if(i==second) cout << s[first];
			else cout << s[i];
		}
	}
	return 0;
}
