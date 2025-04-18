#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[500];
	int y;
	cin.getline(x, 500);	
	cin >> y;
	int z = strlen(x);
	if(y>=z) cout << x;
	else{
		for(int i=0;i<y&&x[i]!='\0';i++){
			cout << x[i];
		}
		cout << "...";
	}
}
