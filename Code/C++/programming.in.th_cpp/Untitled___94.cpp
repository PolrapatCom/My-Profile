#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	if(cin.fail()){
		cout << "Error";
		return 0;
	}
	char z[500] = to_string((x+y)*(x+y));
	cout << strlen(z);
}
