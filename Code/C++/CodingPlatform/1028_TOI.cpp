#include <bits/stdc++.h>
using namespace std;

int main(){
	char ch,ch2;
	int x[256]={0},a;
	while(true){
		cin >> ch;
		if(ch=='='){
			cin >> ch >> a;
			x[ch] = a;
		}
		else if(ch=='#'){
			cin >> ch;
			cout << x[ch]; cout << endl;
		}
		else if(ch=='+'){
			cin >> ch >> ch2;
			x[ch] += x[ch2];
		}
		else if(ch=='-'){
			cin >> ch >> ch2;
			x[ch] -= x[ch2];
		}
		else if(ch=='*'){
			cin >> ch >> ch2;
			x[ch] *= x[ch2];
		}
		else if(ch=='/'){
			cin >> ch >> ch2;
			x[ch] /= x[ch2];
		}
		else if(ch=='!'){
			cout << "!";
			return 0;
		}
	}
}
