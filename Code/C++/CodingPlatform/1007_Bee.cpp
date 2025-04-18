#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,a,b; // a == work  b == soldier
	while(true){
		cin >> x;
		a=1,b=0;
		if(x==-1) return 0;
		for(int i=1;i<=x;i++){
			int swp = b;
			b+=a;
			a+=swp+1; b-=swp;
		}
		cout << a << " " << a+b+1 << endl;
	}
}
