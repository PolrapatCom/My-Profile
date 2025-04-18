#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,sum=0;
	cin >> x;
	for(int i=2;i<=x;i+=2){
		sum += pow(i,2);
	}
	cout << sum;
}
