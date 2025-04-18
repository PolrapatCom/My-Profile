#include <iostream>
using namespace std;

int main(){
	int x; 
	cin >> x;
	for(int i=0;i<12;i++){
		cout << x << " x " << i+1 << " = " << x*(i+1) << endl;
	}
	cout << "รวม : " << x*78;
	//printf("%.2f",78.0*x);
}

