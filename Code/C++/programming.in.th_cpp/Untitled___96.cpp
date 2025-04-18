#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int x[500];
	int i=0,max=0,min=0;
	while(1){
		cin >> x[i];
		if(x[i]==0) break;
		if(max==0&&min==0){
			max=x[i];
			min=x[i];
		}
		else{
			if(x[i]>max) max=x[i];
			else if (x[i]<min) min=x[i];
		} 
		i++;
	}
	cout << "Total : " << i << endl;
	cout << "Maximum : " << max << endl;
	cout << "Minimum : " << min << endl;	
}
//Total : 0
//Maximum : 0
//Minimum : 0
