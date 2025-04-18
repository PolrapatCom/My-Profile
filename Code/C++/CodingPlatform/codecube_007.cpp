#include <bits/stdc++.h>
using namespace std;

int main(){
	string x,y;
	cin >> x >> y;
	long long len = x.length();
	for(int i=0;i<len;i++){
		if(x[i]>='a'&&x[i]<='z'){
			x[i] = x[i] - 'a'+'A';
		}
	}
	for(int i=0;i<len;i++){
		if(y[i]>='a'&&y[i]<='z'){
			y[i] = y[i] - 'a'+'A';
		}
	}
	for(int i=0;i<len;i++){
		int check=(x[i] - y[i] + 26)%26;
		if(check>=0&&check<=9) continue;
		cout << "R.I.P.";
		return 0;
	}
	for(int i=0;i<len;i++){
		cout << (x[i] - y[i] + 26)%26;
	}
}
