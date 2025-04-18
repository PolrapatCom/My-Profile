#include <iostream>

using namespace std;

int main(){
	int x,a,b;
	cin >> x;
	a=x-2;
	for(int i=0;i<x;i++){
		for(int j=0;j<=a;j++){
			cout << " ";
		}
		a--;
		for(int k=0;k<=2*i;k++){
			cout << "*";
		}
		cout << endl;
	}
}

