#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll x,cnt;
	cin >> x;
	ll y[x]={};
	for(ll i=0;i<x;i++){
		cin >> y[i];
		if(i==0) cnt=y[i];
		cnt = cnt*y[i]/__gcd(cnt,y[i]);
	}
	cout << cnt;
}
