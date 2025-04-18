#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string x[5];
	int c=0,n=0;
	for(int i=0;i<4;i++){
		getline(cin, x[i]);
		if(x[i]=="Chicken rice"||x[i]=="chicken rice") c++;
		else if(x[i]=="Noodle"||x[i]=="noodle") n++;
	}
	if(c==n){
		if(x[3]=="Chicken rice"||x[3]=="chicken rice")
		cout << "Chicken rice";
		else cout << "Noodle";
	} 
	else if(c>n) cout << "Chicken rice";
	else cout << "Noodle"; 
}

