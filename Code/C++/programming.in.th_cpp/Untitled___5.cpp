#include <iostream>

using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int max = x;
	int min = y;
	if(y>max) {
		max=y;
		min=x;
	}
	cout << "MAX : " << max << endl;
	cout << "MIN : " << min;
}
