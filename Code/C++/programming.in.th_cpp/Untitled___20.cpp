#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x==1) cout << "#";
	else{
		for(int i=0;i<x;i++) cout << "#"; cout << endl;
		for(int i=0;i<x-2;i++){
			cout << "#"; for(int j=0;j<x-2;j++) cout << " "; cout << "#" << endl;
		}
		for(int i=0;i<x;i++) cout << "#";
	}
}
