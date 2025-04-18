#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x,y;
	cin >> x >> y;
	long long cnt = min(x,y);
//	while(cnt){
//		if(x%cnt==0&&y%cnt==0){
//			gcd = cnt;
//			break;
//		}
//		cnt--;
//	}
	cout << x*y/__gcd(x,y);
}
