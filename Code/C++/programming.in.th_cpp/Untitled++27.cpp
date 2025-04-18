#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char x[999];
	cin >> x;
	for(int i=strlen(x)-1;i>-1;i--){
		cout << x[i];
	} 
}
