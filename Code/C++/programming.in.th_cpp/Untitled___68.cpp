#include <iostream>
using namespace std;

int main(){
	int x[999],i;
	for(i=0;i>-1;i++){
		cin >> x[i];
		if(x[i]<0){
			break;
		}
	}
	for(int j=0;j<i;j++){
		cout << x[j] + x[i] << endl;
	}
}
// 1 2 -1
