#include <iostream>
using namespace std;

int f(int i){
	if(i==0) return 1;
	else return f(i-1) + 100;
}

int main(){
	int x,sum=0;
	cin >> x;
	if(x<0){
		cout << "-1";
		return 0;
	}
	cout << f(x);
}
