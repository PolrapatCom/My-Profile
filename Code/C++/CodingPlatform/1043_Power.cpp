#include <bits/stdc++.h>
using namespace std;

int check(int y){
	for(int i=2;i<=sqrt(y);i++){
		int k=2;
		while(pow(i,k)<=y){
			if(pow(i,k)==y){
				cout << k << endl;
				return 0;
			}
			k++;
		}
	}
	cout << "NO" << endl;
	return 0;
}

int main(){
	int x,y; cin >> x;
	for(int i=0;i<x;i++){
		cin >> y;
		check(y);
	}
}
