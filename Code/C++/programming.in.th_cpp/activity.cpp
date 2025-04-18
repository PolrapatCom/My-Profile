#include <bits/stdc++.h>
using namespace std;

int fac(unsigned long long y){
	if(y==1){
		return 1;
	}
	else{
		return y*fac(y-1);
	}
}

int fac2(unsigned long long y){
	int i;
	unsigned long long sum=1;
	for(i=y;i>y-(y/2);i--){
		sum *= i;
	}
	return sum;
}

int main(){
	int x,i;
	cin >> x;
	if(x==1||x==2){
		cout << "2";
		return 0;
	}
	cout << fac2(x)/fac((x/2));
}
