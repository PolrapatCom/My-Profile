#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> x2 >> y1 >> y2;
	cout << ceil(1.0*(x2-x1)/(y1-y2));
}
