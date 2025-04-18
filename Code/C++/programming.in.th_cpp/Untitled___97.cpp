#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char x[5][500]; int b=0;
	for(int i=0;i<3;i++){
		cin >> x[i];
		if(strcmp(x[i],"Blue")==0) b++;
	}
	for(int i=0;i<3;i++){
		if(strcmp(x[i],"Red")!=0&&strcmp(x[i],"Yellow")!=0&&strcmp(x[i],"Blue")!=0&&strcmp(x[i],"White")!=0){
			cout << "ERROR";
			return 0;
		}
	}
	if(strcmp(x[0],"Red")!=0&&strcmp(x[1],"Red")!=0&&strcmp(x[2],"Red")!=0){
		cout << "Second Line";
	}
	else if(strcmp(x[2],"White")==0){
		cout << "Third Line";
	}
	else if(b>1){
		cout << "First Line";
	}
	else{
		cout << "Third Line";
	}
}
//1.1 ????? (Red)
//1.2 ???????? (Yellow)
//1.3 ????????? (Blue)
//1.4 ????? (White)
