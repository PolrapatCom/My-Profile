#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
    if(x>=80&&x<101) cout << "A";
    else if(x>=70) cout << "B";
    else if(x>=60) cout << "C";
    else if(x>=50) cout << "D";
	else cout << "F";
}
