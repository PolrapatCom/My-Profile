#include <iostream>
using namespace std;

int main(){
	int x,y; cin >> x >> y;
	y--;
	while(y){
		if(y==2){x+=28;}
		else if(y==1||y==3||y==5||y==7||y==8||y==10||y==12){
			x+=31;
		}
		else{x+=30;}
		y--;
	}
	if(x%7==0){
		cout << "Wednesday";
	}
	else if(x%7==1){
		cout << "Thursday";
	}
	else if(x%7==2){
		cout << "Friday";
	}
	else if(x%7==3){
		cout << "Saturday";
	}
	else if(x%7==4){
		cout << "Sunday";
	}
	else if(x%7==5){
		cout << "Monday";
	}
	else if(x%7==6){
		cout << "Tuesday";
	}
}
