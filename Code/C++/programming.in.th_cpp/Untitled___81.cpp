#include <iostream>
using namespace std;

int main(){
	int s,y;
	cin >> s >> y;
	float f = 1.0*s*y/(y+s);
	printf("%.2f cm\n",f);
	if(f>0) cout << "????????";
	else cout << "?????????";
}
//1/f = (y+s)/sy
//  f = s*y/(y+s)
