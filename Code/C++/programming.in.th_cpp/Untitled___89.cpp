#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[500];
	cin >> x;
	if(strcmp(x,"Fire")==0) cout << "00000000000000000000";
	else if(strcmp(x,"Water")==0) cout << "00000000000000000001";
	else if(strcmp(x,"Wind")==0) cout << "00000000000000000010";
	else if(strcmp(x,"Ground")==0) cout << "00000000000000000011";
	else if(strcmp(x,"Light")==0) cout << "00000000000000000100";
	else if(strcmp(x,"Dark")==0) cout << "00000000000000000101";
	else cout << "No have this mahou in your library.";
}
//Fire = 0, Water = 1, Wind = 2, Ground = 3, Light = 4, Dark = 5
