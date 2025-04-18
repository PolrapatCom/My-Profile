#include <bits/stdc++.h>
using namespace std;

bool check(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x; cin >> x;
	while(true){
		int temp1=x,temp2=0;
		while(temp1>0){
			temp2 = temp2*10 + temp1%10;
			temp1 /= 10;
		}
		if(temp2 == x){
			if(check(x)){
				cout << x;
				return 0;
			}
		}
		x++;
	}
}
