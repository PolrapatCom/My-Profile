#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	if(x>75) cout << "excellent";
	else if(x>50) cout << "very good";
	else if(x>25) cout << "good";
	else cout << "fail";
}
