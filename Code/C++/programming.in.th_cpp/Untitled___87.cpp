#include <iostream>
using namespace std;

int main(){
	int I=0,V=0,X=0,L=0,C=0,D=0,M=0;
	char x[500];
	cin >> x;
	for(int i=0;x[i]!='\0';i++){
		if(x[i]=='I') I++;
		else if(x[i]=='V') V++;
		else if(x[i]=='X') X++;
		else if(x[i]=='L') L++;
		else if(x[i]=='C') C++;
		else if(x[i]=='D') D++;
		else if(x[i]=='M') M++;
	}
	if(I>3||V>3||X>3||L>3||C>3||D>3||M>3) cout << "Not Correct";
	else cout << "Correct";
}
