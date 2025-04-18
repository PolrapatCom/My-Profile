#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int len = s.length();
	int ans3=0,ans11=0;
	for(int i=0;i<len;i++){
		ans3*=10,ans11*=10;
		ans3 += s[i]-'0';
		ans11 += s[i]-'0';
		ans3%=3;ans11%=11;
	}
	cout << ans3 << " " << ans11;
}
