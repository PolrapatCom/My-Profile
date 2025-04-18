#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	if(x>5){
		cout << "Error! Not have this floor";
		return 0;
	}
	cout << "OK! Wait please" << endl;
	cout << "---------------" << endl;
	cout << "Lift is arriving!" << endl;
	cout << "---------------" << endl;
	cout << "Lift is going up!" << endl;
	cout << "---------------" << endl;
	cout << "Lift has reached the" << " ";
	cout << x;	if(x==1) cout << "st";
	else if(x==2) cout << "nd";
	else if(x==3) cout << "rd";
	else cout << "th";
	cout << " floor!";
}
