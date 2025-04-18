#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	if(x<=2) cout << "Box's height must be more than 2";
	else{
		for(int i=0;i<x;i++) cout << "#";
		cout << endl;
		for(int i=0;i<x-2;i++){
			cout << "#";
			for(int j=0;j<x-2;j++){
				cout << " ";
			}
			cout << "#" << endl;
		}
		for(int i=0;i<x;i++) cout << "#";
		cout << endl;  
	}
}
