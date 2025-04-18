#include <iostream>

using namespace std;

int main(){
	int n,m,y;
	cin >> n >> m >> y;
	cout << (-n*m-y*m+y)/(1-m) << " ";
	cout << (-y*m-n+y)/(1-m);
}
