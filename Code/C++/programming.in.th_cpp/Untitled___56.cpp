#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	cin >> x;
	cout << x;
	int y=x.length();
	for(int i=y-2;i>-1;i--) cout << x[i];
}
