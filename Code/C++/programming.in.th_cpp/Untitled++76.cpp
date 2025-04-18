#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[500];
	cin.getline(x, 500);
	int y = strlen(x),space=0;
	for(int i=0;i<y;i++){
		if(x[i]==' '){
			space++;
		}
	}
	cout << space+1;
}
