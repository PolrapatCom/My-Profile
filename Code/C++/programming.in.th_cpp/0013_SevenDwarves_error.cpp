#include <iostream>

using namespace std;
int x[9]={0},y[9]={0},i,j,k,num=0;

int main(){
	for(i=0;i<9;i++){
		cin >> x[i];
	}
	for(i=0;i<3;i++){
		num=0;
		for(j=i;j<i+7;j++){
			num += x[j];
			}
		if(num==100){
			for(j=i;j<i+7;j++) 
				y[j] = x[j];
			break;
		}					
	}
	for(k=j-7;k<j;k++)
		cout << y[k] << endl;		
}
