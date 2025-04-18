#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char x[999];
	int sum = 0;
	cin >> x;
	for(int i=0;i<strlen(x);i++){
		sum += x[i]-48;
		if(sum>=10){
			sum=sum%10+sum/10;
		}
	} 
	cout << sum;
}
