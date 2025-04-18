#include <iostream>

using namespace std;
int x[9]={0},y[9]={0},i,j,k,p=0,sum=0;

int main(){
	for(i=0;i<9;i++){
		cin >> x[i];
		sum += x[i];
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(sum-x[i]-x[j]==100){
				p=1;
				break;
			}
		}
		if(p==1) break;
	}
	for(k=0;k<9;k++){
		if(k==i||k==j) continue;
		cout << x[k] << endl;
	}
}
