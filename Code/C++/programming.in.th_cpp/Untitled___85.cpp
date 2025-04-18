#include <iostream>
using namespace std;

int main(){
	char time[6],name[500];
	cin >> time >> name;
	if((time[0]-48)*10+time[1]-48>=5&&(time[0]-48)*10+time[1]-48<=11){
		cout << "Good morning, ";
	}
	else if((time[0]-48)*10+time[1]-48>=12&&(time[0]-48)*10+time[1]-48<=17){
		cout << "Good afternoon, ";
	}
	else if((time[0]-48)*10+time[1]-48>=18){
		cout << "Good evening, ";
	}
	cout << name;
}

