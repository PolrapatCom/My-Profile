#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
//	string x;
//	getline(cin, x)
	char x[999];
	cin.getline(x, 999);
	int y=strlen(x);
	for(int i=0;i<y;i++){
		if(x[i]>='a'&&x[i]<='z') x[i]-=32;
		else if(x[i]!=' ') x[i]+=32;
		cout << x[i];
	}
}
