#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x>100||x<0){
		cout << "Error : Value must be less than or equal to 100.";
		return 0;
	}
    if(x>=90) cout << "A";
    else if(x>=85) cout << "B+";
    else if(x>=80) cout << "B";
    else if(x>=75) cout << "C+";
    else if(x>=70) cout << "C";
    else if(x>=65) cout << "D+";
    else if(x>=60) cout << "D";
	else cout << "F";
}
