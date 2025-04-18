#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	int y[x];
	long double z[x];
	for(int i=0;i<x;i++){
		cin >> y[i];
	}
	for(int i=0;i<x;i++){
		z[i]=pow(2,y[i]);
	}
	for(int i=0;i<x;i++){
		cout << fixed << setprecision(0) << z[i] << "\n";
	}
}
