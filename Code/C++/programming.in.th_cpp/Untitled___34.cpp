#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	int y[x];
	for(int i=0;i<x;i++){
		cin >> y[i];
	}
	int z;
	cin >> z;
	for(int i=0;i<x;i++){
		if(y[i]==z){
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}

