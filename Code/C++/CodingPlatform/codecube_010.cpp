#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x,y;
	cin >> x >> y;
	int a,prime=1;
	if(x==2){
		if(1-y>-1){
		cout << 1-y;
		return 0;
	}
	cout << 0; return 0;
	}
	if(x==3){
		if(2-y>-1){
		cout << 2-y;
		return 0;
	}
	cout << 0; return 0;
	}
	for(int i=3;i<x;i+=2){
		a=0;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				a=1; break;
			}
		}
		if(a==0){
			prime	++;
		}
	}
	if(prime-y>-1){
		cout << prime-y;
		return 0;
	}
	cout << 0; return 0;
}
