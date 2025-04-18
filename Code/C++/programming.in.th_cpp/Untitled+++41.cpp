#include <iostream>

using namespace std;

int main(){
	char y[8][9];
	int me=0,you=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin >> y[i][j];
			if(y[i][j]=='P') me++;
			else if(y[i][j]=='p') you++;
			if(y[i][j]=='N') me+=3;
			else if(y[i][j]=='n') you+=3;
			if(y[i][j]=='B') me+=3;
			else if(y[i][j]=='b') you+=3;
			if(y[i][j]=='R') me+=5;
			else if(y[i][j]=='r') you+=5;
			if(y[i][j]=='Q') me+=9;
			else if(y[i][j]=='q') you+=9;
		}
	}
	if(me==you) cout << "equal";
	else cout << me-you;
}
//Pawn: P,p  ????? 1 ?????
//
//Knight: N,n ????? 3 ?????
//
//Bishop: B,b ????? 3 ?????
//
//Rook: R,r  ????? 5 ?????
//
//Queen: Q,q ????? 9 ?????
//
//King: K,k  ????? 0 ?????
