#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	getline(cin, x);
	int y = x.length(),sum=0;
	for(int i=0;i<y;i++){
		if(x[i]==';') sum++;
	}
	cout << sum;
}
