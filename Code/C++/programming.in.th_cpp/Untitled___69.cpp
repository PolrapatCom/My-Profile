#include <iostream>
using namespace std;

int main(){
	int x[5],y[5]={0},sum=0;
	for(int i=0;i<5;i++){
		cin >> x[i];
		if(x[i]==8) y[0]++;
		else if(x[i]==14) y[1]++;
		else if(x[i]==112) y[2]++;
		else if(x[i]==76) y[3]++;
		else if(x[i]==2) y[4]++;
	}
	for(int i=0;i<5;i++){
		if(y[i]>0) sum++;
	}
	if(sum>=3) cout << "You are lucky";
	else cout << "You are unlucky";
}
// 1 2 -1
