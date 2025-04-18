#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float x;
	cin >> x;
	if(x<=-273) cout << "0";
	else printf("%.2f",x+273.15);
}
