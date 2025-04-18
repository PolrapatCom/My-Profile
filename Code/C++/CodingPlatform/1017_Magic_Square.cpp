#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; cin >> x;
	int y[x][x],check[x*x+1]={0};
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cin >> y[i][j];
			check[y[i][j]]++;
		}
	}
	long long sum=0,a=0;
	for(int j=0;j<x;j++){
		sum += y[0][j];
	}
	for(int i=0;i<x;i++){
		a=0;
		for(int j=0;j<x;j++){
			a += y[i][j];
			if(check[y[i][j]]==0){
				cout << "No";
				return 0;
			}
		}
		if(a!=sum){
			cout << "No";
			return 0;
		}
	}
	for(int i=0;i<x;i++){
		a=0;
		for(int j=0;j<x;j++){
			a += y[j][i];
		}
		if(a!=sum){
			cout << "No";
			return 0;
		}
	}
	a=0;
	for(int i=0;i<x;i++){
		a += y[i][i];
	}
	if(a!=sum){
		cout << "No";
		return 0;
	}
	a=0;
	for(int i=x-1;i>=0;i--){
		a += y[x-i-1][i];
	}
	if(a!=sum){
		cout << "No";
		return 0;
	}
	cout << "Yes";
}
