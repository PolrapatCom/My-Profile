#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	for(int i=0;i<x-1;i++){
		for(int j=0;j<i+1;j++){
			cout << i+1;
		}
		cout << endl;
	}
}
