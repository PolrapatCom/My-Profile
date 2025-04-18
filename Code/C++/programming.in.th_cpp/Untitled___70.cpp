#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[500],vwl[500]={0},csn[500]={0};
	cin.getline(x, 500);
	int y = strlen(x),a=0,b=0;
	for(int i=0;i<y;i++){
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'){
			vwl[a]=x[i];
			a++;
		}
		else if((x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z')){
			csn[b]=x[i];
			b++;
		}
	}
	cout << vwl << endl << csn;
}
