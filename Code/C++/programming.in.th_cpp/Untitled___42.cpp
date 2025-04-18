#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x%2==0 && x%3==0) cout << "FizzBuzz";
	else if(x%2==0) cout << "Buzz";
	else if(x%3==0) cout << "Fizz";
}
