#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[500];
	cin >> x;
	int y = strlen(x);
	for(int i=0;i<y;i++){
		cout << x[i];
		if(i==y-1) return 0;
		if((y-i-1)%3==0) cout << ",";
	}
}
// 1234
// y=4
