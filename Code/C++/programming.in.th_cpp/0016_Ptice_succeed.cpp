#include <iostream>

using namespace std;

int A=0,B=0,G=0,i,n;
char x[101]={0};

int main(){
	cin >> n;
	cin >> x;
	for(i=0;x[i]!='\0';i++){
		if(x[3*i]=='A')	A++;
		if(x[3*i+1]=='B') A++;
		if(x[3*i+2]=='C') A++;
		
		if(x[i*2]=='B') B++;
		if(x[i*4+1]=='A') B++;
		if(x[i*4+3]=='C') B++;
		
		if(x[i*6]=='C') G++;
		if(x[i*6+1]=='C') G++;
		if(x[i*6+2]=='A') G++;
		if(x[i*6+3]=='A') G++;
		if(x[i*6+4]=='B') G++;
		if(x[i*6+5]=='B') G++;
	}
	int max = A;
	if (B > max) max = B;
	if (G > max) max = G;
	cout << max << endl;
	if(max == A) cout << "Adrian" << endl;
	if(max == B) cout << "Bruno" << endl;
	if(max == G) cout << "Goran" << endl;
	//cout << A << " " << B << " " << G;
}
