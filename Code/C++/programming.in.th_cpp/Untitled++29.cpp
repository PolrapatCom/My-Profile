#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char x[999];
	cin >> x;
	int y=strlen(x),a=0,A=0,num=0,aA=0;
	if(y<3||y>20) {
		cout << "Invalid";
		return 0;
	}
	for(int i=0;i<y;i++){
		if(x[i]>='a'&&x[i]<='z') a=1;
		else if(x[i]>='A'&&x[i]<='Z') A=1;
		else if(x[i]>='0'&&x[i]<='9') num=1;
		else aA=1;
	}
	if(a==1&&A==1&&num==1&&aA==1) cout << "Valid";
	else cout << "Invalid";
}
