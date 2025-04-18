#include <bits/stdc++.h>
using namespace std;

int line1(int y){
	while(y>=0){
		cout << "..#.."; y--; //if(y==0) return 0;
		//cout << y;
		cout << ".#."; y--; //if(y==0) return 0;
		//cout << y;
		if(y==1){
			cout << "..*..";
			y--;
		}
		else{
			cout << "..*.";
			y--;
		}
		//cout << y;
		if(y==0) return 0;
		
	}
}
int line2(int y){
	while(y>=0){
		cout << ".#.#."; y--; //if(a>y) return 0;
		cout << "#.#"; y--; //if(a>y) return 0;
		if(y==1){
			cout << ".*.*.";
			y--;
		}
		else{
			cout << ".*.*";
			y--;
		}
		//cout << y;
		if(y==0) return 0;
	}
}
int line3(int y,char x[20]){
	int a=0;
	while(y>=0){
		if(a==0) cout << "#";
		cout << "." << x[a] << ".#"; y--; a++;
		cout << "." << x[a] << "."; y--; a++;
		cout << "." <<  x[a] << "."; y--; a++;
		
		//cout << y;
		if(y==0) return 0;
	}
}

int main(){
	char x[20];
	cin >> x;
	int y = strlen(x);
	//cout << y << endl;
	line1(y); cout << endl;
	line2(y); cout << endl;
	line3(y,x); cout << endl;
	line2(y); cout << endl;
	line1(y);
}
