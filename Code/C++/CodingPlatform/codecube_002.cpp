#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y,gcd;
	cin >> x >> y;
	for(int i=1;i>-1;i++){
		if(x%i==0&&y%i==0){
			gcd = i;	
		}
		if(i==x||i==y){
			cout << gcd;
			return 0;
		}
	}
}
