#include <iostream>
using namespace std;

int main(){
	float x,y;
	cin >> x >> y;
	float bmi = 10000.0*x/y/y;
	printf("%.2f\n",bmi);
	if(bmi<18){
		cout << "Thin";
	}
	else if(bmi>=18&&bmi<=22){
		cout << "Good Health";
	}
	else if(bmi>=23&&bmi<=24){
		cout << "Fat Level 1";
	}
	else if(bmi>=25&&bmi<=29){
		cout << "Fat Level 2";
	}
	else{
		cout << "Fat Level 3";
	}
	
}
//-???????? 18 "Thin"
//
//-??????? 18 - 22 "Good Health"
//
//-??????? 23 - 24 "Fat Level 1"
//
//-??????? 25 - 29 "Fat Level 2"
//
//-??????? 30 "Fat Level 3"
