#include <iostream>
using namespace std;

int main(){
	int x,y;
	char z;
	cin >> x >> z >> y;
	cout << (x%10)*10+x/10 << " + " << (y%10)*10+y/10;
	cout << " = " << (x%10)*10+x/10+(y%10)*10+y/10;
}

