#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin>>n>>k;
	int x[n];
	for(int i=0;i<n;i++){
		cin >> x[i];
	}
	sort(x,x+n);
	int X=0;
	for(int i=n-1;i>=0;i-=k){
		X+=x[i];
	}
	cout << X;
}
