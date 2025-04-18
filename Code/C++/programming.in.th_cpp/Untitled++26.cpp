#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	int y[x];
	for(int i=x-1;i>-1;i--){
		cin >> y[i];
	}
	for(int i=0;i<x;i++){
		cout << y[i] << endl;
	} 
}
