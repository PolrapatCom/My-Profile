#include <bits/stdc++.h>
using namespace std;


int prime(unsigned long long z){
	if(z==2) return 1;
	for(unsigned long long i=2;i<z;i++){
		if(z%i==0){
			return 0;
		}
	}
	return 1;	
}

int main(){
	unsigned long long x;
	cin >> x;
	unsigned long long y[x];
	for(unsigned long long i=0;i<x;i++){
		cin >> y[i];
	}
	for(unsigned long long i=0;i<x;i++){
		if(y[i]%2!=0){
			cout << "T" << endl;
			continue;
		}
		if(prime(y[i])==1){
			cout << "T" << endl;
			continue;
		}
		cout << "F" << endl;
	}
}
