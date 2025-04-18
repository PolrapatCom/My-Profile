#include <iostream>
#include <string>

using namespace std;

int main(){
	string x,y;
	getline(cin, x);
	getline(cin, y);
	int lenx = x.length(),leny = y.length();
	if(lenx>leny) cout << lenx << endl << leny;
	else cout << leny << endl << lenx;
}
