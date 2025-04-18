#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cin >> x;
	if(sqrt(x)==floor(sqrt(x))) cout << "Integer";
	else cout << "Float";
}
