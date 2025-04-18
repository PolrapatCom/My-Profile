#include <iostream>
using namespace std;

int main(){
	int x,y; 
	cin >> x >> y;
	for(int i=0;i<x;i++){
		cout << i+1 << "-" << y << endl;
	}
	cout << x*y;
}

