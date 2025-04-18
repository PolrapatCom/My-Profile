#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned int x,y;
	cin >> x;
	cin >> y;
	unsigned int g=y;
	for(int i=1;i<x;i++){
		cin >> y;
		g = y/__gcd(g,y)*g;	
	}
	cout << g;
}
