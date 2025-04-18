#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x<0){
		cout << "Please enter number greater than or equal to -1.";
		return 0;
	}
	if(x==0){
		cout << "No courses.";
		return 0;
	}
	if(x>0){
		cout << "Now, You have " << x << " courses.";
		return 0;
	}
}
