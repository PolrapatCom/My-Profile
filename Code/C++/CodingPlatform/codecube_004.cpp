#include <bits/stdc++.h>
using namespace std;

long long x;
long long minn;
//
//long long check(long long y[]){
//	long long i,a;
//	for(i=minn;i>0;i--){
//		a=0;
//		for(int j=0;j<x;j++){
//			if(y[j]%i!=0){
//				a=1; break;
//			}
//		}
//		if(a==1) continue;
//		return i; 
//	}
//	return i; 
//}

int main(){
	cin >> x;
	long long y[x+1]={0},sum=0;
	cin >> y[0];
	minn = y[0];
	sum += y[0];
	if(x==1){
		cout << y[0];
		return 0;
	}
	for(long long i=1;i<x;i++){
		cin >> y[i];
		sum = sum + y[i];
		minn = __gcd(y[i],minn);
	}
//	long long gcd = check(y),ans=0;
	cout << sum/minn;
}
