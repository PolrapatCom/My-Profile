#include <iostream>

using namespace std;

long fac(long i){
	if(i<=1){
		return 1;
	}
	else{
		return i*fac(i-1);
	}
}

int main(){
	int x;
	cin >> x;
	cout << fac(x);
}
