#include <iostream>

using namespace std;

int main(){
	int x,z,a=0;
	cin >> x;
	int y[x];
	for(int i=0;i<x;i++){
		cin >> y[i];
	}
	cin >> z; cout << "Position: ";
	for(int i=0;i<x;i++){
		if(y[i]==z){
			if(a==0){
				cout << i+1;
				a++;
			}
			else cout << "," << i+1;
		}
	}
}
