#include <bits/stdc++.h>
using namespace std;

int main(){
	//ios_base::sync_with_stdio(0), cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int x,y;
	cin >> x;
	cin >> y;
	int max=y,min=y;
	if(x == 1){
		cout << max << endl << min;
		return 0;
	}
	for(int i=1;i<x;i++){
		cin >> y;
		if(y>max) max=y;
		if(y<min) min=y;
	}
	cout << max << endl << min;
}
