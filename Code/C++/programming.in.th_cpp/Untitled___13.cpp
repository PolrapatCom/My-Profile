#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float x[5];
	for(int i=0;i<5;i++)
	cin >> x[i];
	cout << "THAI = ";
	printf("%.1f",x[0]);
	cout << endl;
	cout << "MATH = ";
	printf("%.1f",x[1]);
	cout << endl;
	cout << "ENGLISH = ";
	printf("%.1f",x[2]);
	cout << endl;
	cout << "SCIENCE = ";
	printf("%.1f",x[3]);
	cout << endl;
	cout << "SPORT = ";
	printf("%.1f",x[4]);
	cout << endl;
	cout << "---" << endl;
	cout << "GPA = ";
	printf("%.1f",(x[0]+x[1]+x[2]+x[3]+x[4])/5);
}
//THAI = 3.5
//MATH = 2.0
//ENGLISH = 4.0
//SCIENCE = 2.0
//SPORT = 2.5
//---
//GPA = 2.8
