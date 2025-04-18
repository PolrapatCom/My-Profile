#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x<2||x>1000) return 0;
	int y[x+10]={},z[10010]={};
	int count = 0;
	for(int i=0;i<x;i++){
		cin >> y[i];
		z[y[i]]++;
		if(count<y[i]){
			count = y[i];
		}
	}
	int max = 0;
	for(int i=1;i<=count;i++){
		if(max<z[i]){
			max = z[i];
		}
	}
	for(int i=1;i<=count;i++){
		if(z[i]==max){
			cout << i << " ";
		}
	}
}
