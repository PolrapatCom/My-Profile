#include <iostream>

using namespace std;

int main(){
	char x[500],y[500];
	int z;
	cin >> x >> y >> z;
	if(z<=2003)
    cout << "Welcome " << x << " " << y << " to NongGipsy Pub";
    else if(z>2003)
	cout << "You shall not pass!"; 
}
//2021 - x >= 18
