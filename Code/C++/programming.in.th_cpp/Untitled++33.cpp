#include <iostream>

using namespace std;

int main(){
	int x,year[500];
	char fname[500][500],lname[500][500],gender[500][500];
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> fname[i] >> lname[i] >> year[i] >> gender[i];
		
	}
	cout << "--Customers Information--" << endl;
	for(int i=0;i<x;i++){
		cout << fname[i] << " " << lname[i] << " (age : "<< 2017-year[i];
		cout << ")" << endl;
	}
}
//3 
//K P 
//1990
//Male
//A A 
//2010
//Male
//Sommai KraiMakMak 
//1950
//Male
