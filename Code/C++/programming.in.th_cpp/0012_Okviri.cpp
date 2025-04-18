#include <bits/stdc++.h>
using namespace std;

int line1(int y){
	int a=1;
	cout << ".";
	while(a<=y){
		cout << ".#.."; a++; if(a>y) return 0;
		cout << ".#.."; a++; if(a>y) return 0;
		cout << ".*.."; a++; if(a>y) return 0;
	}
}
int line2(int y){
	int a=1;
	cout << ".";
	while(a<=y){
		cout << "#.#."; a++; if(a>y) return 0;
		cout << "#.#."; a++; if(a>y) return 0;
		cout << "*.*."; a++; if(a>y) return 0;
	}
}
int line3(int y,char x[20]){
	int a=1;
	cout << "#";
	while(a<=y){
		cout << "." << x[a-1] << ".#"; a++; if(a>y) return 0;
		cout << "." << x[a-1] << ".*"; a++; if(a>y) return 0;
		cout << "." <<  x[a-1] << ".*"; a++; if(a>y) return 0;
	}
}

int main(){
	char x[20];
	cin >> x;
	int y = strlen(x);
	line1(y); cout << endl;
	line2(y); cout << endl;
	line3(y,x); cout << endl;
	line2(y); cout << endl;
	line1(y);
}
