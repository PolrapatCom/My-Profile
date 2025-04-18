#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; cin >> x; int n=x/2,a=0;
	if(x%2==1){
		for(int i=0;i<x/2;i++){
			for(int j=0;j<x;j++){
				if(j==n+a||j==n-a){
					cout << "*";
					continue;
				}
				cout << "-";
			}
			a++; cout << endl;
		}
		for(int i=x/2;i<x;i++){
			for(int j=0;j<x;j++){
				if(j==n+a||j==n-a){
					cout << "*";
					continue;
				}
				cout << "-";
			}
			a--; cout << endl;
		}
	}
	else{
		for(int i=0;i<x/2;i++){
			for(int j=0;j<x-1;j++){
				if(j==n+a-1||j==n-a-1){
					cout << "*";
					continue;
				}
				cout << "-";
			}
			a++; cout << endl;
		} a--;
		for(int i=x/2;i<x;i++){
			for(int j=0;j<x-1;j++){
				if(j==n+a-1||j==n-a-1){
					cout << "*";
					continue;
				}
				cout << "-";
			}
			a--; cout << endl;
		}
	}
}
