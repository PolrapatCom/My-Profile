#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,sum=0;
	cin >> x;
	int y[x]={0};
	for(int i=0;i<x;i++){
		cin >> y[i];
		sum+=y[i];
	}
	cout << sum << " THB";
}
